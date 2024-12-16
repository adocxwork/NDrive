n = int(input("Enter number : "))
ans = 0
mul = 1
while(n>0):
    i = n%10
    n = n//10
    if(i!=9):
        i = i + 1
        i *= mul
    else:
        i = 0
    mul *= 10
    ans += i
print(ans)