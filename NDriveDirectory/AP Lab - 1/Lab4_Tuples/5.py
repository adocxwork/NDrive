def fun(heads, legs):
    if legs % 2 != 0 or legs > 4 * heads or legs < 2 * heads:
        return "No solution"
    r = (legs - 2 * heads) // 2
    c = heads - r
    if r < 0 or c < 0:
        return "No solution"
    return c, r

test_cases = [
    (150, 400),
    (3, 11),
    (3, 12),
    (5, 10)
]
for heads, legs in test_cases:
    result = fun(heads, legs)
    if type(result)==type((1,)):
        print(f"heads-{heads} legs-{legs} : {result[0]} {result[1]}")
    else:
        print(f"heads-{heads} legs-{legs} : {result}")
