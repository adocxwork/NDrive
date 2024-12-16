def rightjustify(s):
    lines = s.split('\n')
    max_length = max(len(line) for line in lines)
    for line in lines:
        print(line.rjust(max_length))
text = """Jaypee
University
Of
Engineering
And
Technology"""

rightjustify(text)
