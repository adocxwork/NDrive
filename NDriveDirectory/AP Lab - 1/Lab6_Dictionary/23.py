ll = []
givenYear = int(input("Enter Year : "))
while(len(ll)<15):
    givenYear += 1
    if(givenYear%4==0 and givenYear%100!=0):
        ll.append(givenYear)
    elif(givenYear%4==0 and givenYear%100==0 and givenYear%400==0):
        ll.append(givenYear)
print(ll)