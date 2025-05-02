def subset_sum_backtrack(nums, target):
    result = []

    def backtrack(index, current_sum, path):
        if current_sum == target:
            result.append(path.copy())
            return
        if current_sum > target or index >= len(nums):
            return
        path.append(nums[index])
        backtrack(index + 1, current_sum + nums[index], path)
        path.pop()
        backtrack(index + 1, current_sum, path)

    backtrack(0, 0, [])
    return result

# Example
nums = [10, 7, 5, 18, 12, 20, 15]
target_sum = 35
solutions = subset_sum_backtrack(nums, target_sum)
print("Subsets with sum", target_sum, ":", solutions)


# Outputs
# Subsets with sum 35 : [[10, 7, 18], [10, 5, 20], [5, 18, 12], [20, 15]]