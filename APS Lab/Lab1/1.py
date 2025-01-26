def getNext(l):
    if 'a' <= l <= 'z':
        if l == 'z':
            return 'a'
        else:
            return chr(ord(l) + 1)
    elif 'A' <= l <= 'Z':
        if l == 'Z':
            return 'A'
        else:
            return chr(ord(l) + 1)

def answer():
    print("Hi! I'm a clever computer program that knows the alphabet.")
    
    while True:
        l = input("Please enter a letter:\n")
        
        if len(l) == 1 and l.isalpha():
            nl = getNext(l)
            print(f"The next letter is {nl}.")
        else:
            print("That's not a valid letter. Please try again.")
            continue
        
        uc = input("Do you want to enter another letter (y = yes)?\n")
        
        if uc != 'y':
            print("Goodbye!")
            break

answer()
