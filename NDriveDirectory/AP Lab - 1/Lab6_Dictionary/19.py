def isPrime(x):
    if x <= 1:
        return False
    if x <= 3:
        return True
    if x % 2 == 0 or x % 3 == 0:
        return False
    i = 5
    while i * i <= x:
        if x % i == 0 or x % (i + 2) == 0:
            return False
        i += 6
    return True

def digitSum(n):
    return sum(int(digit) for digit in str(n))

dic = {}
for i in range(50, 101):
    if(isPrime(i)):
        dic[i] = digitSum(i)
print(dic)