"""
    Write a python program to find all repeated items in a tuple.
    Solution: 1) Use collections 
              2) Use hash map 
"""
if __name__ == "__main__":
    values = (1, 2, 3, 4, 5, 3, 2, 1, 5, 9, 18, 33)
    hash_map = dict()
    final = list()
    print("Initial tuple is: ", values)

    for val in values:
        if val not in hash_map:
            hash_map[val] = 1
        else:
            final.append(val)
    
    print("Repeated items in a tuple is: ", tuple(final))


