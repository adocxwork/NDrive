'''
Find the minimum and maximum values in the input array.
Create n empty buckets (where n is the size of the input array).
Iterate through the input array, and for each element, calculate the appropriate bucket index and place the element in that bucket.
Sort each bucket individually (using any efficient sorting algorithm, like Insertion Sort or Quick Sort).
Concatenate all the sorted buckets to get the final sorted array.
'''


def bucket_sort(arr):
    min_val = min(arr)
    max_val = max(arr)
    n = len(arr)
    buckets = [[] for _ in range(n)]
    
    for num in arr:
        index = int(n * (num - min_val) / (max_val - min_val))
        if index == n:
            index -= 1
        buckets[index].append(num)
    
    for i in range(n):
        buckets[i] = sorted(buckets[i])
    
    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(bucket)
    
    return sorted_arr


arr = [9,1,8,2,7]
print(bucket_sort(arr))