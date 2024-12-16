#arr = [1,2,2,3,4,4,4,10]
arr = [10,20,30,40,30,20]
#arr = [1,1,5,100,-20,-20,6,0,0]
def sameAdj(arr):
    count = 0
    for i in range(len(arr)-1):
        if(arr[i]==arr[i+1]):
           count = count + 1
    return count
print(sameAdj(arr))
