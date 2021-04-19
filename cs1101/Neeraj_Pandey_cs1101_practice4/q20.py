"""
    Write a program to print the following pattern for a given value of n:

    n = 5

    5 4 3 2 1
    5 4 3 2
    5 4 3
    5 4 
    5 
"""
if __name__ == "__main__":
    for i in range(6):
        for j in range(6 - 1, i, -1):
            print(j, end = " ")
        print("\r")