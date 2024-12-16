num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
a, b = num1, num2
while b != 0:
    a, b = b, a % b
gcd = a
lcm = abs(num1 * num2) // gcd
print(f"The LCM of {num1} and {num2} is {lcm}.")