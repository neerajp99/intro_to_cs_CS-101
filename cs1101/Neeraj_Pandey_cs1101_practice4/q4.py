"""
    Write a program to generate the first n prime numbers (take n as input from the user).
"""
import math
def find_primes(n: int) -> None:
    # Initialise a check array
    arr = [0, 0]
    # Approximate upper limit using Rosser's Theorem
    upper = int((n + 1) * math.log(n + 1) + (n + 1) * math.log(math.log(n + 1)))
    # Add index values to the array 
    for i in range(2, upper + 1):
        arr.append(i)
    count = 0
    x = 2

    while x * x <= upper or count == n:
        # If arr[i] is not changed 
        if arr[x] != 0:
            # Update all the multiples of the arr[x] value
            for j in range(x, upper):
                if arr[x] * j > upper:
                    break
                # If not, true
                else: 
                    arr[arr[x] * j] = 0
        x += 1
        count += 1
    ctr = 0
    for i in range(upper):
        if arr[i] != 0 and ctr < n:
            print(arr[i])
            ctr += 1

if __name__ == "__main__":
    value = int(input("Enter the value of N: "))
    find_primes(value)
