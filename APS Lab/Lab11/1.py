def lcs(X, Y):
    m = len(X)
    n = len(Y)
    
    # Create a 2D table to store lengths of LCS
    dp = [[0] * (n + 1) for _ in range(m + 1)]

    # Fill dp[][] in bottom-up manner
    for i in range(m):
        for j in range(n):
            if X[i] == Y[j]:
                dp[i + 1][j + 1] = dp[i][j] + 1
            else:
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1])

    # Backtrack to find the LCS string
    i, j = m, n
    lcs_str = []
    while i > 0 and j > 0:
        if X[i - 1] == Y[j - 1]:
            lcs_str.append(X[i - 1])
            i -= 1
            j -= 1
        elif dp[i - 1][j] >= dp[i][j - 1]:
            i -= 1
        else:
            j -= 1

    return ''.join(reversed(lcs_str))

# Example usage:
X = "AGGTAB"
Y = "GXTXAYB"
print("Longest Common Subsequence:", lcs(X, Y))


# Output
# Longest Common Subsequence: GTAB