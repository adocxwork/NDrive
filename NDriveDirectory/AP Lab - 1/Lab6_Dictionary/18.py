import math
odd = {}
for i in range(1, 101,2):
    odd[i] = math.log2(i)
print(odd)