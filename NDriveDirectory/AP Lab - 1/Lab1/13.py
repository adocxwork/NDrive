print("Enter amount to be withdrawn :-")
amt = int(input("Amount : "))
thousands = amt//1000
amt = amt % 1000
hundreds = amt//100
amt = amt % 100
tens = amt//10
amt = amt % 10

print("No of notes :-")
print("Thousand :", thousands)
print("Hundreds :", hundreds)
print("Tens :", tens)