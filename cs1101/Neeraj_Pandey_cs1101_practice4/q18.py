"""
    Write a program to check if two given sets have any elements in common. 
"""
if __name__ == "__main__":
    set1 = {1,2,3,4,4,1,3,2,5}
    set2 = {1,2,8,6,3,9,20}
    # Returns true if there are common values
    print(bool(set(set1) & set(set2)))