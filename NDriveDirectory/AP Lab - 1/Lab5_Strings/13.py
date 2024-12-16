a = input()
b = input()
a = int(a)
b = int(b)
l = []
for i in range(a):
    ll = []
    a = 0
    for j in range(b):
        ll.append(a)
        a += i
    l.append(ll)

print(l)