name = (input("enter your: ").strip()).lower()  # Stores the user’s name
addr = (input("enter email: ").strip()).lower()  # Stores the email address
matches = 0  # Whether this is a valid email address for this person
nameadd = (addr[0:addr.find("@")])
print(nameadd)
contains1 = list(name)
contains2 = list(nameadd)
freq1 = list()
freq2 = list()
ctr = 0
ctr2 = 0

if addr.find("@") == -1:
    print(matches)


else:
    for i in nameadd:
        if name.find(i) == -1:
            print(matches)

    for i in range(len(contains1) - 1):
        if contains1[i] >= 'a' and contains1[i] <= 'z':
            ctr += 1
            freq1.append(ctr)
    for i in range(len(contains2) - 1):
        if contains2[i] >= 'a' and contains2[i] <= 'z':
            ctr2 += 1
            freq2.append(ctr2)

    for i in range(26):
        if freq2[i] > freq1[i]:
            print(matches)

    matches = matches + 1
    print(matches)
