def do_twice(f, v):
    f(v)
    f(v)

def print_spam():
    print("spam")

def print_2ice(s):
    print(s)
    print(s)


do_twice(print_2ice, "spam")