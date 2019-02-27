# initial solution
firstNumber = input('Enter First Number ')
secondNumber = input('Enter Second Number ')
#swapping the values by using x, y = y, x
firstNumber, secondNumber = secondNumber, firstNumber
print('firstNumber: ', firstNumber)
print('secondNumber: ', secondNumber)

#alternate solution
firstNumber = input('Enter First Number ')
fl = len(firstNumber)
secondNumber = input('Enter Second Number ')
sl = len(secondNumber)
firstNumber = float(firstNumber) + float(secondNumber)
secondNumber = float(firstNumber) - float(secondNumber)
firstNumber = float(firstNumber) - float(secondNumber)
print('firstNumber: ', str(firstNumber)[:fl])
print('secondNumber: ', str(secondNumber)[:sl])
