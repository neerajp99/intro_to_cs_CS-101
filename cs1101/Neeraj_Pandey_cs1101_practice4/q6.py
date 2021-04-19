"""
    Write a program that accepts integers until the user enters 1, and display the average of all the numbers. 
    Also note that 1 should not be included as an element while calculating the average.
"""
def calculate_average(value: int, average: int, count: int) -> int:
    average = ((average * (count - 1)) + value) / count 
    return average


if __name__ == "__main__":
    average = 0
    count = 0
    while True:
        value = int(input("Enter the value of number: "))
        if value == 1:
            print("Exiting now..... \n")
            print("Average of the value is: ", average)
            break 
        else: 
            count += 1
            average = calculate_average(value, average, count)

