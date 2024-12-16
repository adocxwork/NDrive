def check_types(str):
    l = len(str)
    i = 0
    j = l-1
    ll = 0
    tt = 0
    while(i<j):
        if((str[i]=='[' or str[j]==']') and ll==0):
            print("List", end=" ")
            ll = 1
        elif((str[i]=='(' or str[j]==')') and tt==0):
            print("Tuple", end=" ")
            tt = 1
        i += 1
        j -= 1
check_types("[1,2,(3,4),5]")