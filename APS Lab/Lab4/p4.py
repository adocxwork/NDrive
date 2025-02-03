def max_segment_sum(A):
    max_sum = float('-inf')
    current_sum = 0
    start = 0
    end = 0
    temp_start = 0
    
    for i in range(len(A)):
        current_sum += A[i]
        
        if current_sum > max_sum:
            max_sum = current_sum
            start = temp_start
            end = i
        
        if current_sum < 0:
            current_sum = 0
            temp_start = i + 1
    
    return max_sum, start, end

A = [4, -5, 8, -1, 3, -4.2, 0, 2]

max_sum, start, end = max_segment_sum(A)

print(f"The maximum segment sum is {max_sum}")
print(f"The indices i and j are {start} and {end}, respectively")
