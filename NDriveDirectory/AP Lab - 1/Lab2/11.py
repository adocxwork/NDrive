def prismArea(a, b, c, w):
    s = (a+b+c)/2
    return (a+b+c)*w + 2*((s*(s-a)*(s-b)*(s-c))**0.5)

print("Prism area :", prismArea(2,3,4,3))
