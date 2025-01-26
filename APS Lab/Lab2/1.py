def calculate_steps(N):
    # Total steps as per the formula 5N + 3
    return 5 * N + 3

N1 = 10
N2 = 100

steps_N1 = calculate_steps(N1)
steps_N2 = calculate_steps(N2)

print("Total steps for N = ", N1, ":", steps_N1)
print("Total steps for N = ", N2, ":", steps_N2)