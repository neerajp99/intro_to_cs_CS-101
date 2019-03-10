name = input("Enter your name: ").strip() #Stores the user's name
addr = input("Enter your email address: ").strip() #Stores the email address
matches = 0 #Whether this is a valid email address for this person

#Your code here

#Converting the input to lowercase
lowerName = name.lower()
lowerAddr = addr.lower()

#Creating empty lists so that we can check the frequency
checkFreqName = list()
checkFreqEmail = list()

#Taking the sub string before @
checkForAt = (lowerAddr[0:lowerAddr.find("@")])

#Creating list for the input name and the sub string
listName = list(lowerName)

#removing spaces from the input name lists
while(" " in listName) :
    listName.remove(" ")
print('woah: ', listName)

# print("List of Namennnn: ", listName)
listAddr = list(checkForAt)
# print("List of @ before: ", listAddr)

if lowerAddr.find("@") == -1:

    print('@ not found', matches)
    exit()

else:
    for i in listAddr:
        if " " in listAddr:
            print('Entered email ID is incorrect, there is a space in between', 0)
            exit()
        elif i not in listName:
            print('Character not matched', matches)
            exit()
        else:
            listNameLength = len(listName)
            listAddrLength = len(listAddr)

            for i in range(0, listNameLength - 1, 1):
                ordListNameIndex = 0
                if listName[i] >= 'a' and listName[i] <= 'z':
                    ordListNameIndex = ord(listName[i])
                    print(ordListNameIndex)
                    checkFreqName.append(ordListNameIndex - 97)


            for i in range(0, listAddrLength - 1, 1):
                ordListAddrIndex = 0
                if listAddr[i] >= 'a' and listAddr[i] <= 'z':
                    ordListAddrIndex = int(ord(listAddr[i]))
                    checkFreqName.append(ordListNameIndex - 97)

print(matches)
