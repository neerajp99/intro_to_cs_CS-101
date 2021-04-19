"""
    Write a program to find the prime factors of a number entered by the user.
"""
if __name__ == "__main__":
    num = 2
    index = 0
    value = int(input("Enter the value: "))
    arr = [-1] * value 

    while num * num <= value:
        if value % num:
            num += 1
        else:
            value = value / num 
            arr[index] = num 
            index += 1
    
    if value > 1:
        arr[index] = value 

    # Show the prime factors
    for i in range(index + 1):
        if arr[i] != -1:
            print(int(arr[i]))
