#Fucntion to check the string and return the final height
def checkUpDowns (elev, height):
    ctrUp = 0
    ctrDown = 0
    #looping over the trail string and checking for 'up' and 'down'
    for i in range(0, len(elev) - 1, 1):
        #Checking for up substring and increasing the height by 5m
        if elev[i] == 'u' and elev[i+1] == 'p':
            ctrUp += 1
            height += 5
        #Checking for up substring and decreasing the height by -5m
        if elev[i] == 'd' and elev[i+1] == 'o' and elev[i+2] == 'w' and elev[i+3] == 'n':
            ctrDown += 1
            height -= 5
    #Printing the final height
    print ('Final height:',height,'m')

#taking input from the user and removing whitespaces from left and right
elev = input().strip() #The trail
h = 0 #The current height

#Your code here
checkUpDowns (elev, h)
# No need to print this here
# print(h)
