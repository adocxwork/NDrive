from Std_Record import *

state = {}
for i in D4.values():
    if(i in state.keys()):
        state[i] = state[i] + 1
    else:
        state[i] = 1

for i in state.keys():
    if(state[i]==1):
        continue
    print(i.upper())
    for j in D4.keys():
        if(i==D4.get(j)):
            print(j)
            print(D1.get(j))
            print(D3.get(j))
            print(D5.get(j))
            print(D6.get(j))
            print()
