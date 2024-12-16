from Std_Record import *
host = set()
for i in D6.values():
    h = i.split("@")[-1]
    host.add(h)

for i in host:
    for j in D6.keys():
        if(i in D6.get(j)):
            print(j)
            print(D1.get(j))
            print(D3.get(j))
            print(D4.get(j))
            print(D5.get(j))
            print(D6.get(j))
            print()