from Std_Record import *
# 94: BSNL, 98: Airtel, 89:Idea, 77:Reliance, 99:Vodafone, 79:Docomo
isp = {"BSNL":"94", "Airtel":"98", "Idea":"89",
       "Reliance":"77", "Vodafone":"99", "Docomo":"79"}

for i in isp.keys():
    print(i)
    for j in D3.keys():
        mo = D3.get(j)[0:2]
        if(isp.get(i)==mo):
            print(j)
            print(D1.get(j))
            print(D2.get(j))
            print(D3.get(j))
            print(D5.get(j))
            print(D6.get(j))
            print()