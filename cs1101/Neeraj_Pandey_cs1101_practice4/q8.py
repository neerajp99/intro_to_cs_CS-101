"""
    Write a program that accepts 2 lists of 5 integers and merge it into one list of 10 integers.
"""
if __name__ == "__main__":
    list1 = list()
    list2 = list()

    for i in range(5):
        x = int(input(f"Enter first list value { i + 1 }: "))
        list1.append(x)

    for i in range(5):
        x = int(input(f"Enter second list value { i + 1 }: "))
        list1.append(x)

    combined_list = list1 + list2
    print("Combined list is: ", combined_list)
