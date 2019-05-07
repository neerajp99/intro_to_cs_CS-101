#
def getNumber(fname):
    google = open(fname).readlines()
    a = 1
    b = 0
    c = 1
    next = 0
    for s in google:
        for word in s:
            word.rstrip('\n')
            word = ord(word)
            if next <= 1000:
                next = a + b + c
                print(next)
                a = b
                b = c
                c = next

            if next > 1000:
                a = 1
                b = 0
                c = 1
                next =0





getNumber("cipher.txt")
