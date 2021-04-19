"""
    Write a program that will remove all of the empty entries from a list.
"""
if __name__ == "__main__":
    values = ["a", "", "c", " ", "  ", "     ", "d"]
    values = list(filter(None, values))
    values = ' '.join(values).split()
    print(values)
