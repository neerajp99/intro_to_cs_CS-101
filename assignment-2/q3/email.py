name = input("Enter your name: ").strip() #Stores the user's name
addr = input("Enter your email address: ").strip() #Stores the email address
matches = 1 #Whether this is a valid email address for this person

#Your code here
#Converting the input to lowercase
lowerName = name.lower()
lowerAddr = addr.lower()

#Creating empty lists so that we can check the frequency
# checkFreqName = list()
# checkFreqEmail = list()

#Checking for the sub string before @
if lowerAddr.find("@") != -1:
    checkForAt = (lowerAddr[:lowerAddr.find("@")])
else:
    print('@ not found, invalid email format')
    matches = 0
    print(matches)
    exit()

#Creating list for the input name and the sub string
listName = list(lowerName)

#removing spaces from the input name lists
while(" " in listName) :
    listName.remove(" ")

# print("List of Namennnn: ", listName)
listAddr = list(checkForAt)
#Check if first element is an alphabet or not
if ord(listAddr[0]) not in range(97, 121, 1):
    print('invalid email')
    matches = 0
    print(matches)
    exit()

#Cretaing a new list for Addr
newListAddr = list()

#removing extra numbers or special characters from the email
for i in listAddr:
    if ord(i) >= 97 and ord(i) <= 120:
        newListAddr.append(i)


#test cases check
for i in newListAddr:
    if " " in listAddr:
        print('Entered email ID is incorrect, there is a space in between', 0)
        matches = 0
        print(matches)
        exit()
    if i not in listName:
        print('Character not matched', matches)
        matches = 0
        print(matches)
        exit()

# Assigning the length to the lists
listNameLength = len(listName)
listAddrLength = len(newListAddr)

#creatig two dictionaries to store key, value pairs
countsName = dict()
countsAddr = dict()

#Looping over the listName which contains the name entered by the user in lowercase
for word in listName:
    #if element from listName is not present in the countsName dictionary,
    #then, add it with a value.
    if word not in countsName:
        countsName[word] = 1
    else:
        countsName[word] += 1
for word in newListAddr:
    #if element from listName is not present in the countsAddr dictionary,
    #then, add it with a value.
    if word not in countsAddr:
        countsAddr[word] = 1
    else:
        countsAddr[word] += 1

#Printing the two created dictionaries
# print('countsName', countsName)
# print('countsAddr', countsAddr)

# Storing the values of dictionary in a list to manipulate it
lst = list()
lst1 = list()

#Taking items from the list and appending key, vals in the list1
for key, val in list(countsName.items()):
    lst.append((val, key))
#Taking items from the list and appending key, vals in the list2
for key, val in list(countsAddr.items()):
    lst1.append((val, key))

#Looping over the lists and checking for characters frequency
for key, val in lst: #Final Name List with key, value
    for keys, vals in lst1: #Final Addr List with key, value
        #check if same value is preent in the other list
        if vals == val:
            #if its present, check for the keys
            if keys > key:
                print('Incorrect Frequency')
                matches = 0
                print(matches)
                exit()

    #Checking with Ascii values, but not neccessary
    # Genrating ascii values and checking them
    # for i in range(0, listNameLength, 1):
    #     ordListNameIndex = 0
    #     if listName[i] >= 'a' and listName[i] <= 'z':
    #         ordListNameIndex = ord(listName[i])
    #         checkFreqName.append(ordListNameIndex - 97)
    #         print(ordListNameIndex)
    #
    #
    # for i in range(0, listAddrLength, 1):
    #     ordListAddrIndex = 0
    #     if listAddr[i] >= 'a' and listAddr[i] <= 'z':
    #         ordListAddrIndex = int(ord(listAddr[i]))
    #         checkFreqName.append(ordListAddrIndex - 97)

print("Matches: ", matches)
