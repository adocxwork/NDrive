import time
import random

def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])
    right_half = merge_sort(arr[mid:])
    
    return merge(left_half, right_half)

def merge(left, right):
    sorted_arr = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            sorted_arr.append(left[i])
            i += 1
        else:
            sorted_arr.append(right[j])
            j += 1
    sorted_arr.extend(left[i:])
    sorted_arr.extend(right[j:])
    return sorted_arr

def measure_sort_time(n):
    arr = [random.randint(0, 10000) for _ in range(n)]
    start_time = time.time()
    merge_sort(arr)
    end_time = time.time()
    return end_time - start_time

def run_experiment():
    ns = [1000, 2000, 3000, 4000, 5000]
    results = []

    for n in ns:
        time_taken = measure_sort_time(n)
        results.append((n, time_taken))
    
    return results

def print_table(results):
    print("n            Time Taken (seconds)")
    print("-" * 30)
    for n, time_taken in results:
        print(f"{n}\t\t {time_taken:.6f}")

results = run_experiment()
print_table(results)
# plot graph too..