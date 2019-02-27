n = int(input('ENTER THE NUMBER OF TILES IN THE CORRIDOR: ')) #Number of tiles in the corridor
s = int(input('ENTER THE START POSIITON: ')) #start position
e = int(input('ENTER THE END POSITION: ')) #end position (s < e)
hall = [] #List with quantities
for i in range(n):
    hall.append(int(input('Enter the amount of junk: ')))

#Your code here
# newTrash = []
if s < e:
    for i in range (s, e+1, 1):
        # newTrash.append(i)
        hall[i-1] = 0
# print(type(newTrash))
if s > n or e > n:
    print('Please check the values, start point or end point can\'t be greater than the total umber of tiles' )
elif s > e:
    for i in range(s, e-1, -1):
        # newTrash.append(hall[i-1])
        hall[i-1] = 0
    # print('"Error" end point is smaller than the start point')
for i in range(n):
    print(hall[i])
