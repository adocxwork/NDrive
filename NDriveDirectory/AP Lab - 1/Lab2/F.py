def print1to10(s):
    if(s=='a'):
        for i in range(1, 11):
            print(i)
        return
    else:
        for i in range(10, 0, -1):
            print(i)

s = input("Enter (a) for ascending & (d) for descending : ")
print1to10(s)