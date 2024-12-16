sp = int(input("Enter selling price : "))
profit = int(input("Enter profits : "))
if(profit>0):
    sp -= profit
else:
    sp += profit
print("Cost of 1 item :", sp/15)