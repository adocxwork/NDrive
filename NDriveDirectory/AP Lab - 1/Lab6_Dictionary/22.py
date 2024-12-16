from Std_Record import *
Name = input("Enter Name No : ")
en = -1
for i in D1.keys():
    if(D1.get(i)==Name):
        en = i
        break
print("Enroll :", en)
print("Marks :", D5.get(en))
print("City :", D2.get(en))
print("State :", D4.get(en))
print("Mobile No :", D3.get(en))
print("Email ID :", D6.get(en))