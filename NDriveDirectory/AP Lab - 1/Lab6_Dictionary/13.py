from Std_Record import *
ll = set()
en = -1
m = -1
for i in D5.keys():
    if(D5.get(i)[0]>m):
        en = i
        m = D5.get(i)[1]
for i in D5.keys():
    if(m==D5.get(i)[1]):
        ll.add(i)
for i in ll:
    print(i)
    print(D1.get(i))
    print(D2.get(i))
    print(D3.get(i))
    print(D5.get(i))
    print(D6.get(i))
    print()