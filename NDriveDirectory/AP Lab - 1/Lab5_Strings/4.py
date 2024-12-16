def max_of_three(a, b, c):
    if(a>b and a>c):
        return a
    elif(b>a and b>c):
        return b
    elif(c>a and c>b):
        return c
    else:
        return -1
print(max_of_three(5,6,7))
