import random
import time

def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[0]
    left = [x for x in arr[1:] if x <= pivot]
    right = [x for x in arr[1:] if x > pivot]
    return quicksort(left) + [pivot] + quicksort(right)

def generate_random_list(n):
    return [random.randint(1, 10000) for _ in range(n)]

def measure_sorting_time(n):
    random_list = generate_random_list(n)
    start_time = time.time()
    quicksort(random_list)
    end_time = time.time()
    return end_time - start_time

n_values = [10000, 20000, 30000, 40000, 50000]
time_taken = []

for n in n_values:
    time_taken.append(measure_sorting_time(n))

print("Number of elements : n | Time taken")
print("-----------------------------------")

for i in range(len(n_values)):
    print(n_values[i], "\t\t", f"{time_taken[i]:0.5f}")
