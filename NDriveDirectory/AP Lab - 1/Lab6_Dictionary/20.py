from Std_Record import *
name = input("Enter name : ")
en = -1
for i in D1.keys():
    if(D1.get(i)==name):
        en = i
        break
else:
    print("Not Found")

print("1. Enroll No\n2. City\n3. Mobile No\n4. State\n5. Marks\n6. Mail ID\n")
details = input("Enter details to be fetched : ")
for i in details:
    if(i=="1"):
        print(en)
    elif(i=="2"):
        print(D2.get(en))
    elif(i=="3"):
        print(D3.get(en))
    elif(i=="4"):
        print(D4.get(en))
    elif(i=="5"):
        print(D5.get(en))
    elif(i=="6"):
        print(D6.get(en))