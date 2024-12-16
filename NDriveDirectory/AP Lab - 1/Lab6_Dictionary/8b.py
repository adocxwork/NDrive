from Std_Record import *
l = 'y'
while(l=='y'):
    em = input("Enter Email ID : ")
    for i in D6.keys():
        if(D6.get(i).lower()==em.lower()):
            print("Enroll No. :", i)
            print("Name :", D1.get(i))
            break
    l = input("Do you want to continue? (y/n) : ")
