width  = 0
height = 0
maxval = 0

def convolve(pixel, kernel, i, j):
	R = 0
	G = 0
	B = 0
	if i<1 or j<1 or i>=height-1 or j>=width-1:
		R = pixel[i][j][0]
		G = pixel[i][j][1]
		B = pixel[i][j][2]
	else:
		R = (
		pixel[i-1][j-1][0] * kernel[0][0] + pixel[i-1][j  ][0] * kernel[0][1] + pixel[i-1][j+1][0] * kernel[0][2] +
		pixel[i  ][j-1][0] * kernel[1][0] + pixel[i  ][j  ][0] * kernel[1][1] + pixel[i  ][j+1][0] * kernel[1][2] +
		pixel[i+1][j-1][0] * kernel[2][0] + pixel[i+1][j  ][0] * kernel[2][1] + pixel[i+1][j+1][0] * kernel[2][2]
		)

		G = (
		pixel[i-1][j-1][1] * kernel[0][0] + pixel[i-1][j  ][1] * kernel[0][1] + pixel[i-1][j+1][1] * kernel[0][2] +
		pixel[i  ][j-1][1] * kernel[1][0] + pixel[i  ][j  ][1] * kernel[1][1] + pixel[i  ][j+1][1] * kernel[1][2] +
		pixel[i+1][j-1][1] * kernel[2][0] + pixel[i+1][j  ][1] * kernel[2][1] + pixel[i+1][j+1][1] * kernel[2][2]
		)

		B = (
		pixel[i-1][j-1][2] * kernel[0][0] + pixel[i-1][j  ][2] * kernel[0][1] + pixel[i-1][j+1][2] * kernel[0][2] +
		pixel[i  ][j-1][2] * kernel[1][0] + pixel[i  ][j  ][2] * kernel[1][1] + pixel[i  ][j+1][2] * kernel[1][2] +
		pixel[i+1][j-1][2] * kernel[2][0] + pixel[i+1][j  ][2] * kernel[2][1] + pixel[i+1][j+1][2] * kernel[2][2]
		)

	R = R*(R>0)
	G = G*(G>0)
	B = B*(B>0)

	R = R if R<256 else 255
	G = G if G<256 else 255
	B = B if B<256 else 255


	if R<0 or R>255 or G<0 or G>255 or B<0 or B>255:
		print(R, G, B)
	return (R,G,B)


fin = open("image.pbm", "rb")

kernel_identity = [
	[0, 0, 0],
	[0, 1, 0],
	[0, 0, 0]
]

kernel_blur = [
    [(1 / 256), (4  / 256),  (6 / 256),  (4 / 256), (1 / 256)],
    [(4 / 256), (16 / 256), (24 / 256), (16 / 256), (4 / 256)],
    [(6 / 256), (24 / 256), (36 / 256), (24 / 256), (6 / 256)],
    [(4 / 256), (16 / 256), (24 / 256), (16 / 256), (4 / 256)],
    [(1 / 256), (4  / 256),  (6 / 256),  (4 / 256), (1 / 256)]
]

filetype_raw   = next(fin)
width_raw      = next(fin)
height_raw     = next(fin)
maxval_raw     = next(fin)

width  = int(  width_raw.decode('ascii') )
height = int( height_raw.decode('ascii') )
maxval = int( maxval_raw.decode('ascii') )

pixel = [[0 for j in range(width)] for i in range(height)]

for i in range(height):
	for j in range(width):
		R = int.from_bytes( fin.read(1), 'big' )
		G = int.from_bytes( fin.read(1), 'big' )
		B = int.from_bytes( fin.read(1), 'big' )
		pixel[i][j] = (R, G, B)
fin.close()

out = []

for i in range(height):
	for j in range(width):
		RGB = convolve(pixel, kernel_edge, i, j)
		out.append(RGB[0])
		out.append(RGB[1])
		out.append(RGB[2])

fout = open("out.pbm", "wb")

fout.write(filetype_raw)
fout.write(width_raw)
fout.write(height_raw)
fout.write(maxval_raw)

fout.write(bytes(out))

fout.close()
