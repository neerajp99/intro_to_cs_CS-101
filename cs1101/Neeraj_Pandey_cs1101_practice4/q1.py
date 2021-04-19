"""
    Write a program that accepts two integers from the user and swaps the values without using a third variable. 
"""

def swap_values(x, y):
    x = x ^ y
    y = x ^ y
    x = x ^ y
    return (x, y)


if __name__ == "__main__":
    x = int(input("Enter first integer: "))
    y = int(input("Enter second integer: "))

    x, y = swap_values(x, y)

    print("Swapped value of x: ", x)
    print("Swapped value of y: ", y)