x = 1000

for i in range(1, x+1, 1):
    if i % 5 == 0:
        print(i , "!")
    if i %9 == 0:
        print(i, "?")
    if i % 5 ==0  and i %9 ==0:
        print(i, "!?")
