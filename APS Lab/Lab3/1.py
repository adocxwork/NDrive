import time
import random

def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

def binary_search(arr, target):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1

def compare_search_times():
    arr_size = 1000000
    arr = random.sample(range(1, arr_size + 1), arr_size)
    arr.sort()
    target = random.choice(arr)
    
    start_time = time.time()
    linear_search(arr, target)
    linear_search_time = time.time() - start_time
    
    start_time = time.time()
    binary_search(arr, target)
    binary_search_time = time.time() - start_time
    
    print(f"Linear Search Time: {linear_search_time:.6f} seconds")
    print(f"Binary Search Time: {binary_search_time:.6f} seconds")

compare_search_times()