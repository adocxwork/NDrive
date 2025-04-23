def insertion_sort(bucket):
    for i in range(1, len(bucket)):
        key = bucket[i]
        j = i - 1
        while j >= 0 and bucket[j] > key:
            bucket[j + 1] = bucket[j]
            j -= 1
        bucket[j + 1] = key

def bucket_sort(A):
    n = len(A)
    buckets = [[] for _ in range(n)]

    for x in A:
        index = int(n * x)
        buckets[index].append(x)

    for bucket in buckets:
        insertion_sort(bucket)

    sorted_array = []
    for bucket in buckets:
        sorted_array.extend(bucket)

    return sorted_array

A = [0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]
sorted_A = bucket_sort(A)
print("Sorted array:", sorted_A)