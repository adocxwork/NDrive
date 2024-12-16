odd = -1
for i in range(10):
    ii = int(input("Enter number : "))
    if(ii%2!=0 and ii>odd):
        odd = ii
if(odd!=-1):
    print(odd)
else:
    print("No odd inputs..")