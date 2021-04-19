"""
    Write a program to find the factorial of a number:
    a) using a for loop
    b) using a while loop
    c) using a do-while loop
"""
def using_for(value: int) -> None:
    factorial = 1
    for i in range(1, value + 1):
        factorial = factorial * i 
    print("Factorial using FOR is: ", factorial)

def using_while(value: int) -> None:
    factorial = 1
    index = 1
    while index <= value:
        factorial = factorial * index 
        index += 1
    print("Factorial using WHILE is: ", factorial)

def using_do_while(value: int) -> None:
    factorial = 1
    index = 1
    while True:
        factorial = factorial * index 
        index += 1
        if index > value:
            break
    print("Factorial using DO-WHILE is: ", factorial)

if __name__ == "__main__":
    value = int(input("Enter the value of number: "))
    # Handline edge cases 
    if (value < 0):
        print("N is smaller than 0. Please enter a positive number.")   
    else:
        using_for(value)
        using_while(value)
        using_do_while(value)