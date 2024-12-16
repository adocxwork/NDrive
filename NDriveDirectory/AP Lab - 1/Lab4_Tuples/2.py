def bill(price, quantity, cusQuan):
    b = 0
    l = len(price)
    for i in range(l):
        if(cusQuan[i]>quantity[i]):
            return -1
    for i in range(l):
        b += cusQuan[i]*price[i]
    if(b>30000):
        b = b*(95/100)
    return b

gem = ["Emerald", "Ivory", "Jasper", "Ruby", "Garnet"]
price = [1760, 2119, 1599, 3920, 3999]
l = len(gem)
quantity = []
print("Enter the quantity available at store :-")
for i in gem:
    q = int(input(f"{i} : "))
    quantity.append(q)

cusQuan = []
print("Enter the quantity required by the customere :-")
for i in gem:
    cq = int(input(f"{i} : "))
    cusQuan.append(cq)

print("Total bill of customer : ", bill(price, quantity, cusQuan))