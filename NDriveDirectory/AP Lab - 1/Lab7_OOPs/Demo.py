class myClass:
    name = ""
    age = 0
    def __init__(self, a, b):
        print("object created..")
        self.name = a
        self.age = b
    def show(self):
        print(self.name, self.age)
    def __del__(self):
        print("The object is getting deleted..")

m = myClass("Aditya", 18)
m.show()
print(m.name)
#print(myClass.age)
