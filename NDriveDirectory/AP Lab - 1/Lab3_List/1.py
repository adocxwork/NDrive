arr = [[[[(1,2,3)], 5], 7]]
def printList(arr):
    for i in arr:
        if(type(i)==list or type(i)==tuple):
            printList(i)
        else:
            print(i, end=" ")

printList(arr)
