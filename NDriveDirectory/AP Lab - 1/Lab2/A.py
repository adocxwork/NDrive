def draw_pattern(n):
    size = 4

    for i in range(n * (size + 1) + 1):
        for j in range(n * (size + 1) + 1):
            if i % (size + 1) == 0:
                if j % (size + 1) == 0:
                    print("+ ", end="")
                else:
                    print("- ", end="")
            else:
                if j % (size + 1) == 0:
                    print("| ", end="")
                else:
                    print("  ", end="")
        print()

draw_pattern(1)
print()
draw_pattern(2)