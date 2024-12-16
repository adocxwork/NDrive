num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
while num2 != 0:
    num1, num2 = num2, num1 % num2
print(f"The HCF of the given numbers is {num1}.")
