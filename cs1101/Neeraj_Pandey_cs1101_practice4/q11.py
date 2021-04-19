"""
    Concatenate two different lists in the following way:
    List1 = ["bingo ", "bango"] 
    List2 = ["bongo ", "dry”] 
    [“bingle bongo”, “bingo dry”, “bango bongo”, “bango dry”]

    Solution: Using list comprehensions, makes work simpler
"""
if __name__ == "__main__":
    list1 = list()
    list2 = list()

    n1 = int(input("Enter the length of list 1: "))
    for i in range(n1):
        x = input(f"Enter the first list value { i + 1 }: ")
        list1.append(x)

    n2 = int(input("Enter the length of list 1: "))
    for i in range(n2):
        x = input(f"Enter the first list value { i + 1 }: ")
        list2.append(x)

    # list1 = ["bingo ", "bango "] 
    # list2 = ["bongo ", "dry "] 
    
    combined_list = [x + " " + y for x in list1 for y in map(str, list2)]
    print(combined_list)

