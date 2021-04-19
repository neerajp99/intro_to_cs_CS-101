"""
    Write a program to generate all prime numbers between 1 and n (take n as input from the user).

    Solution: Using Sieve of Eratosthenes 
    Time Complexity: O(n log log(n))
"""
def find_primes(n):
    # Initialise a check array
    arr = [0, 0]
    x = 2
    # Add index values to the array 
    for i in range(2, n + 1):
        arr.append(i)

    while x * x <= n:
        # If arr[i] is not changed 
        if arr[x] != 0:
            # Update all the multiples of the arr[x] value
            for j in range(x, n):
                if arr[x] * j > n:
                    break
                # If not, true
                else: 
                    arr[arr[x] * j] = 0
        x += 1

    for i in range(n):
        if arr[i] != 0:
            print(arr[i])

if __name__ == "__main__":
    value = int(input("Enter the value of N: "))
    find_primes(value)
