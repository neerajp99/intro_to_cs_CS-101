#Function to check the highest elevation in a list
def checkHighest (highest):
    #initially the highest elevation is the first item of the list
    high = highest[0]
    #looping over the list and checking for the highest elevation
    for i in range (0, len(highest), 1):
        if highest[i] > high:
            high = highest[i]
    print('Highest Elevation: ', high, 'm')

#Function to check the lowest elevation in a list
def checkLowest (lowest):
    #initially the lowest elevation is the first item of the list
    low = lowest[0]
    #looping over the list and checking for the lowest elevation
    for i in range (0, len(lowest), 1):
        if lowest[i] < low:
            low = lowest[i]
    print('Lowest Elevation: ', low, 'm')

#Fucntion to check the string and return the final height
def checkUpDowns (elev, height):
    ctrUp = 0
    ctrDown = 0
    highest = list()
    lowest = list()
    #looping over the trail string and checking for 'up' and 'down'
    for i in range(0, len(elev) - 1, 1):
        #Checking for up substring and increasing the height by 5m
        if elev[i] == 'u' and elev[i+1] == 'p':
            ctrUp += 1
            height += 5
            highest.append(height)
        #Checking for up substring and decreasing the height by -5m
        if elev[i] == 'd' and elev[i+1] == 'o' and elev[i+2] == 'w' and elev[i+3] == 'n':
            ctrDown += 1
            height -= 5
            lowest.append(height)
    #Printing the final height
    # print ('Final height:',height,'m')
    # print(highest)
    # print(lowest)
    checkHighest(highest)
    checkLowest(lowest)


#taking input from the user and removing whitespaces from left and right
elev = input('Enter the string for trail: ').strip() #The trail
h = 0 #The current height

#Your code here
checkUpDowns (elev, h)
# No need to print this here
# print(h)
