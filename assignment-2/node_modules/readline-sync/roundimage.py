def convolve(pixel, kernel, i, j):
    return pixel[i][j]


fin = open("image.ppm", "rb")

kernel_identity = [
    [0, 0, 0],
    [0, 1, 0],
    [0, 0, 0]
]

filetype_raw = next(fin)
width_raw = next(fin)
height_raw = next(fin)
maxval_raw = next(fin)

width = int(width_raw.decode('ascii'))
height = int(height_raw.decode('ascii'))
maxval = int(maxval_raw.decode('ascii'))

pixel = [[0 for j in range(width)] for i in range(height)]


for i in range(height):
    for j in range(width):

        R = int.from_bytes(fin.read(1), 'big')
        G = int.from_bytes(fin.read(1), 'big')
        B = int.from_bytes(fin.read(1), 'big')

        pixel[i][j] = (R, G, B)
fin.close()


out = []

for i in range(height):
    for j in range(width):
        RGB = convolve(pixel, kernel_identity, i, j)

        if(RGB[0] >= RGB[1] and RGB[0] >= RGB[2]):
            out.append(255)
            out.append(0)
            out.append(0)
        elif (RGB[0] < RGB[1] and RGB[1] >= RGB[2]):
            out.append(0)
            out.append(255)
            out.append(0)
        else:
            out.append(0)
            out.append(0)
            out.append(255)

fout = open("round.ppm", "wb")

fout.write(filetype_raw)
fout.write(width_raw)
fout.write(height_raw)
fout.write(maxval_raw)

fout.write(bytes(out))
fout.close()
