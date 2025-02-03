def find_pair(A1, A2, x):
    elements_in_A2 = set()
    for i in range(len(A2)):
        elements_in_A2.add(A2[i])

    for i1 in range(len(A1)):
        required_value = x - A1[i1]

        if required_value in elements_in_A2:
            i2 = A2.index(required_value)
            return f"yes with i1 = {i1} and i2 = {i2}"
    
    return "no"

A1 = [4, 5, 8, 1, 3, 9, 0, 2]
A2 = [2, 3, 35, 32, 12, 9, 2]
x1 = 41
print(find_pair(A1, A2, x1))