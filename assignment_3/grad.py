dir = input()
f = open("simple.ppm", "w")
width  = 512
height = 512
maxval = 255

# write the header
f.write("P3\n")     			# P3 = colour image; each pixel is RGB
f.write(f"{width} {height}\n") 	# width height (in pixels)
f.write(f"{maxval}\n")			# max value of each colour

if dir == '-':
    for i in range(height):
            for j in range(width):
                R = int((height - i) * maxval / width)
                G = 0
                B = int((i) * maxval / height)
                f.write(f"{R} {G} {B} ")

elif dir == '\\':
    for i in range(height):
        for j in range(width):
            R = int((i) * maxval / width)
            G = 0
            B = int((j) * maxval / height)
            f.write(f"{R} {G} {B} ")

elif dir == '|':
    for i in range(height):
        for j in range(width):
            R = int((width - j) * maxval / width)
            G = 0
            B = int(j * maxval / height)
            f.write(f"{R} {G} {B} ")

else:
    for i in range(height):
        for j in range(width):
            R = int(j * maxval / width)
            G = 0
            B = int(i * maxval / height)
            f.write(f"{R} {G} {B} ")
