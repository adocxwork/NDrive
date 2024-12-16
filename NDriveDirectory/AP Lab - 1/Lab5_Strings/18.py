def Str2List(a):
    temp = []
    if(a[0] != '[' and a[-1]!=']'):
        print("Error")
        return temp
    for i in a:
        if(i in ['1','2','3','4','5','6','7','8','9','0']):
            temp = temp + [int(i)]
        elif (i in ['[', ']',',']):
            pass
        else:
            print("Error")
            return temp
    return temp
a = input("Enter Tuple : ")
a = Str2List(a)
print("List of length", len(a))
print("List is", a)