n = int(input("Enter number : "))
flag= 0
for i in range(1, n):
    if(i*i*i == n):
        print("Cube root :", i)
        flag = 1
        break
    elif(i*i*i>n):
        break
if(flag==0):
    print("The number is not perfect cube.")
else:
    print("The number is perfect cube.")
