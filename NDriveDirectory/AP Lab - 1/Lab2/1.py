def simpleInterest(p, r, t):
    return (p*r*t)/100
print("Enter the value of p, r, t")
p = int(input())
r = int(input())
t = int(input())
print("Simple Interest :", simpleInterest(p, r, t))
