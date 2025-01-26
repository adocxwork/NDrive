def bubble_sort(arr):
    n = len(arr)
    P = 1
    l = n
    print("Initial array:", arr)

    while l > 1:
        E = 0
        for i in range(l - 1):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                E += 1

        print("After pass", P, "array:", arr, "exchanges:", E)
        if E == 0:
            break
        P += 1
        l -= 1

    print(f"Sorted array: {arr}")

array = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(array)