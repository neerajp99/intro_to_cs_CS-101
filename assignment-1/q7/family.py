f = int(input('Enter Mr.Roy\'s choice: ')) #Mr Roy's choice
m = int(input('Enter Mrs.Roy\'s choice: ')) #Mrs Roy's choice
g = int(input('Enter Mrs.Roy\'s mother\'s choice: ')) #Mrs Roy's mother's choice
d = int(input('Enter daughter\'s choice: ')) #Daughter's choice

#Your code here
ctr = 0
if f > 0 and m > 0 and f == m:
    print(f,m)
    ctr = ctr + 1
if f > 0 and m > 0 and g > 0 and f == m == g :
    print(f,m,g)
    ctr = ctr + 1
if f > 0 and m > 0 and d > 0 and f == m == d:
    print(f,m,d)
    ctr = ctr + 1
if m > 0 and d >0 and g > 0 and m == d == g:
    print(m,d,g)
    ctr = ctr + 1
if f > 0 and d > 0 and g > 0 and f == d == g:
    print(f,d,g)
    ctr = ctr + 1
if f > 0 and m > 0 and g > 0 and d > 0 and f == m == g == d:
    print(f,m,g,d)
    ctr = ctr + 1
else:
    if ctr == 0:
        print('0')
