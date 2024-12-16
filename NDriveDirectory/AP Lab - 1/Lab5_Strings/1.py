def fib(idx):
    if(idx==0 or idx==1):
        return idx
    return fib(idx-1) + fib(idx-2)
def fibo(n):
    for i in range(n):
        print(fib(i), end=" ")
fibo(10)
