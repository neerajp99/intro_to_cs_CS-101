"""
    Write a program to remove all common elements from both the sets. 
"""
if __name__ == "__main__":
    set1 = {1,2,3,4,4,1,3,2,5}
    set2 = {1,2,8,6,3,9,20}
    print("Initial set 1: ", set1)
    print("Initial set 2: ", set2)
    check = list()
    if (bool(set(set1) & set(set2))):
        for val in set1:
            if val in set2:
                check.append(val)
    
    for val in check:
        set1.remove(val)
        set2.remove(val)

    print("After removal in set 1: ", set1)
    print("After removal in set 2: ", set2)