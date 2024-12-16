def translate(s):
    str = ''
    for i in s:
        if(i in ('a','e','i','o','u', ' ')):
            str += i
        else:
            str += (i+'o'+i)
    return str

print(translate("this is fun"))