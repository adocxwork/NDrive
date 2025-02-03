def counting_sort(arr):
    max_val = max(arr)
    min_val = min(arr)

    range_of_elements = max_val - min_val + 1
    count = [0] * range_of_elements
    output = [0] * len(arr)

    for num in arr:
        count[num - min_val] += 1
    for i in range(1, len(count)):
        count[i] += count[i - 1]
    for num in reversed(arr):
        output[count[num - min_val] - 1] = num
        count[num - min_val] -= 1
    for i in range(len(arr)):
        arr[i] = output[i]
    return arr

A = [21, 51, 31, 1, 22, 32, 2, 33]

sorted_A = counting_sort(A)
print("Sorted array:", sorted_A)

'''
Find the maximum value in the array.
Create a count array of size (maximum value + 1) and initialize all elements to 0.
Count the frequency of each element in the input array and store it in the count array.
Modify the count array by accumulating the previous counts.
Create an output array to store the sorted result.
Iterate over the input array in reverse order and place each element at the correct position in the output array using the count array.
Copy the sorted elements from the output array back to the original array if needed.
'''