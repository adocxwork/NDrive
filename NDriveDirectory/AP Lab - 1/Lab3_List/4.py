enrol = []
name = []
for i in range(10):
    e = int(input("Enroll : "))
    n = input("Name : ")
    enrol.append(e)
    name.append(n)

se = int(input("Enter enroll to search : "))
if(se in enrol):
    idx = enrol.index(se);
    print("Enroll :", se)
    print("Name :", name[idx])
else:
    print(-1)
