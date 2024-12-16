from Std_Record import *
city = {}
for i in D2.values():
    if(i in city.keys()):
        city[i] = city[i] + 1
    else:
        city[i] = 1

for i in city.keys():
    if(city[i]==1):
        continue
    print(i.upper())
    for j in D2.keys():
        if(i==D2.get(j)):
            print(j)
            print(D1.get(j))
            print(D3.get(j))
            print(D5.get(j))
            print(D6.get(j))
            print()
