class strWork:
    def __init__(self):
        self.text = ""

    def get_String(self):
        self.text = input("Enter a string: ")

    def print_String(self):
        print(self.text.upper())

s = strWork()
s.get_String()
s.print_String()
