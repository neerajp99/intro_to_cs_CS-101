"""
    Write a program that accepts 10 integers from the user into a list, and prints the minimum and maximum value.
"""
def find_minmax(values: list) -> set:
    minimum, maximum = values[0], values[0]
    for i in range(len(values)):
        if minimum > values[i]:
            minimum = values[i]
        if maximum < values[i]:
            maximum = values[i]
    return (maximum, minimum)

if __name__ == "__main__":
    values = list()
    for i in range(10):
        x = int(input(f"Enter the list value { i + 1 }: "))
        values.append(x)

    maximum, minimum = find_minmax(values)
    print("Maximum value is: ", maximum)
    print("Minimum value is: ", minimum)
