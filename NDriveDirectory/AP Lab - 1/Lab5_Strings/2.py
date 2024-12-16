def isPrime(x):
    for i in range(2, (x//2)+1):
        if(x%i==0 and x!=i):
            return False
    return True
def fun(a, b):
    for i in range(a, b+1):
        if(isPrime(i)):
            print(i, end=" ")
fun(20,40)
