def can_form_triangle(a, b, c):
    return (a + b > c) and (a + c > b) and (b + c > a)

a = (3, 4, 5) # Valid triangle
b = (1, 1, 2) # Invalid triangle
print("Triangle with sides 3, 4, 5 : ", can_form_triangle(a[0], a[1], a[2]))
print("Triangle with sides 1, 1, 2 : ", can_form_triangle(b[0], b[1], b[2]))
