from Std_Record import *
l = 'y'
while(l=='y'):
    m = input("Enter Mobile No : ")
    for i in D3.keys():
        if(D3.get(i)==m):
            print("Name :", D1.get(i))
            print("City :", D2.get(i))
            break
    l = input("Do you want to continue? (y/n) : ")
