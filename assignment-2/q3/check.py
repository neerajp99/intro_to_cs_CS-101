name = input("enter your: ").strip()  # Stores the user’s name
addr = input("enter email: ").strip()  # Stores the email address
matches = 0  # Whether this is a valid email address for this person
nameadd = (addr[0:addr.find("@")])
contains1 = list(name).tolower()
contains2 = list(nameadd)
freq1 = []
freq2 = []

if addr.find("@") == -1:
    print(matches)

    for i in nameadd:
        if name.find(i) == -1:
            print(matches)

    for i in range(len(contains1) - 1):
        if contains1[i] >= 'a' and contains1[i] <= 'z':
            freq1[ord(contains1[i]) - 97] = freq1[ord(contains1[i]) - 97] + 1
    for i in range(len(contains2) - 1):
        if contains2[i] >= 'a' and contains2[i] <= 'z':
            freq2[ord(contains2[i]) - 97] = freq2[ord(contains2[i]) - 97] + 1

    for i in range(26):
        if freq2[i] > freq[i]:
            print(matches)

    matches = matches + 1
    print(matches)
