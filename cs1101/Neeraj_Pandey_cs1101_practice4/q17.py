"""
    Write a program that takes 5 fruits as input from the user as a list, and convert the list into a tuple.
"""
if __name__ == "__main__":
    fruits = list()
    for i in range(5):
        x = input(f"Enter the fruit number { i + 1 }: ")
        fruits.append(x)

    fruits = (*fruits, )
    print("Transformed list to tuple is: ", fruits)
