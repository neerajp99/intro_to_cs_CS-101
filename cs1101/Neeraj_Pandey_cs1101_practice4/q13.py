"""
    Convert the following lists into a dictionary: 
    keys = [‘bingo’, 'bango', 'bongo']
    values = [27, 69, 12]

"""
if __name__ == "__main__":
    keys = ["bingo", "bango", "bongo"]
    values = [27, 69, 12]
    hash_map = dict()

    for index, val in enumerate(keys):
        hash_map[val] = values[index]
    
    print("Dictionary is: ", hash_map)
        