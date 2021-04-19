"""
    Write a program that accepts 10 integers from a user into an array, 
    and count the number of occurrences of all present prime numbers.
"""
def check_prime(value: int) -> bool:
    if value > 1:
        for i in range(2, value):
            if value % i == 0:
                return 0
        else: 
            return 1
    else:
        return 0

def count_occurrences(values: list) -> None:
    hash_map = dict()
    for i, val in enumerate(values):
        flag = check_prime(val)
        if flag == 1:
            if val not in hash_map:
                hash_map[val] = 1
            else:
                hash_map[val] += 1
    print(hash_map)
    for value in hash_map:
        print(f"Occurrence of prime number {value} is: ", hash_map[value])

if __name__ == "__main__":
    values = list()
    for i in range(10):
        x = int(input(f"Enter the list value { i + 1 }: "))
        values.append(x)
    count_occurrences(values)
    


