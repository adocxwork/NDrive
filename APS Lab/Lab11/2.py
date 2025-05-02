import numpy as np

def matrix_chain_order(p):
    n = len(p) - 1
    m = [[0] * n for _ in range(n)]
    s = [[0] * n for _ in range(n)]

    for l in range(2, n + 1):  # l is chain length
        for i in range(n - l + 1):
            j = i + l - 1
            m[i][j] = float('inf')
            for k in range(i, j):
                q = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1]
                if q < m[i][j]:
                    m[i][j] = q
                    s[i][j] = k

    return m, s

def print_optimal_parens(s, i, j):
    if i == j:
        return f"M{i+1}"
    else:
        return f"({print_optimal_parens(s, i, s[i][j])}{print_optimal_parens(s, s[i][j]+1, j)})"

def matrix_chain_multiply(matrices, s, i, j):
    if i == j:
        return matrices[i]
    else:
        A = matrix_chain_multiply(matrices, s, i, s[i][j])
        B = matrix_chain_multiply(matrices, s, s[i][j]+1, j)
        result = np.dot(A, B)
        print(f"Multiplying M{i+1} to M{s[i][j]+1} and M{s[i][j]+2} to M{j+1}")
        print(f"Result:\n{result}")
        return result

# Example
dims = [30, 35, 15, 5, 10, 20, 25]  # Example matrix dimensions
matrices = [np.random.randint(1, 10, (dims[i], dims[i+1])) for i in range(len(dims) - 1)]

m, s = matrix_chain_order(dims)
print("Optimal Parenthesization:", print_optimal_parens(s, 0, len(dims) - 2))
print("Total scalar multiplications:", m[0][len(dims) - 2])

final_result = matrix_chain_multiply(matrices, s, 0, len(dims) - 2)
print("Final Result Matrix:\n", final_result)


# Output
# Optimal Parenthesization: ((M1(M2M3))((M4M5)M6))
# Total scalar multiplications: 15125
# Multiplying M2 to M2 and M3 to M3