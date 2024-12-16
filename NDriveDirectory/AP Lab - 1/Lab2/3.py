def compoundInterest(p, r, t):
    amt = p*(1 + (r/100))**t
    return amt-p
print("Enter principle, rate, time :-")
p = float(input())
r = float(input())
t = float(input())
print("Compound Interest :", compoundInterest(p, r, t))
