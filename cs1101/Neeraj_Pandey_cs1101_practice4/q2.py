"""
    Write a program that accepts five integers from the user and displays the numbers in ascending order. 

    Solution: Using Quick Sort in O(n  log(n))
"""
def quick_sort(unsorted_array):
    if len(unsorted_array) <= 1:
        return unsorted_array
    else:
        # In each recursive call, make pivot the last element
        pivot = unsorted_array.pop()
        pivot_left = []
        pivot_right = []

        # Loop over the values of unsorted array
        for value in unsorted_array:
            if value < pivot:
                pivot_left.append(value)
            else:
                pivot_right.append(value)
        # Recursively calling the function with updating left, pivot and right
        return quick_sort(pivot_left) + [pivot] + quick_sort(pivot_right)


if __name__ == "__main__":
    unsorted_array= list()

    for i in range(5):
        x = int(input("Enter the integer value: "))
        unsorted_array.append(x)
    print(quick_sort(unsorted_array))
    # print(sorted(values))


