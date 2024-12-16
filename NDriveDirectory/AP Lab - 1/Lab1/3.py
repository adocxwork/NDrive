p = int(input("Enter Principle : "))
r = float(input("Enter rate : "))
t = int(input("Enter time : "))
print("SI :", (p*r*t)/100)
amt = p*(1 + (r/100))**t
print("CI :", amt-p)
