fname = input().strip() #Name of text file to be changed
foutn = input().strip() #Name of output text file
n = int(input()) #Number to be removed from the file

#Your code here
#Opening the input file in read mode
inputFile = open(fname, "r")

#Reading the file and making a list for it
inputRead = inputFile.read().split()

#Checking if the input file is empty
if not inputRead:
    print('The input file is empty')
    exit()

#if the file is not empty, do this
else:
    #Opening the Output file in write mode
    outputFile = open(foutn, 'w')

    #Looping over the input text and removing the words with the input Number
    #by adding it to the output file
    for i in inputRead:
        stringN = str(n)
        #check if the current index of the list is not equal to index value with the number
        #if it's not there, add the word to the output file
        if i.find(stringN) == -1:
            outputFile.write(i + " ")
        else:
            continue
    #Close the files
    inputFile.close()
    outputFile.close()
