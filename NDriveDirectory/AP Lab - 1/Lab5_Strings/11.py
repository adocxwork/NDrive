def is_member(x, a):
    for i in a:
        if(x==i):
            return True
    return False

x1 = 3
x2 = 31
a = [9,1,8,2,7,3,5]
print(is_member(x1, a))
print(is_member(x2, a))