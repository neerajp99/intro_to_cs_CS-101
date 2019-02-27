n1 = int (input("Input Dimension 1 \n")) #Degree of First Polynomial
n2 = int (input("Input Dimension 2 \n")) #Degree of Second Polynomial
a = [] #First Polynomail
b = []#Second Polynomial
c = []#Third Polynomial
c = [0] * (n1+n2-1)
for i in range(n1):
    a.append(int(input("Input Polynomial 1 Coefficient \n")))
for i in range(n2):
    b.append(int(input("Input Polynomial 2 Coefficient \n")))

for j, x in enumerate(a):
    for k,y in enumerate(b):
        c[j+k] = c[j+k] + (x*y)

#Set n2 as the size of output array
#Output array should be
n3 = n1 + n2 - 1
for i in range(n3):
    print(c[i])
