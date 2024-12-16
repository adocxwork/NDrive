list1 = input("Enter the first list of numbers (space-separated): ").split()
list2 = input("Enter the second list of numbers (space-separated): ").split()

list1 = [int(x) for x in list1]
list2 = [int(x) for x in list2]
result = []
for i in range(max(len(list1), len(list2))):
    try:
        num1 = list1[i] if i < len(list1) else 0
        num2 = list2[i] if i < len(list2) else 0
        result.append(num1 + num2)
    except Exception as e:
        print(f"An error occurred: {e}")
print("Resulting list with summed elements:", result)