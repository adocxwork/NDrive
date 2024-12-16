arr = []
ch = 'y'
while(ch=='y'):
    a = int(input("Enter value : "))
    arr.append(a)
    ch = input("Do you want to enter more element?(y/n) : ")

print(arr)
print("Minimum :", min(arr), "\nMaximum :", max(arr))
#swapping
m1 = arr.index(max(arr))
m2 = arr.index(min(arr))
arr[m1], arr[m2] = arr[m2], arr[m1]

print(arr)
