def positivefunction():
	userInput = float(input())
	if (abs(userInput) == userInput):
		print("it's positive")
	else:
		userInput = (userInput * (-1))
		print ("converted to positive : ", int(userInput))

positivefunction()
