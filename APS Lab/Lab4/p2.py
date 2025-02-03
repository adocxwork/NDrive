def find_min_difference_pair(S):
    S.sort()
    min_diff = float('inf') # large min diff
    pair = None

    for i in range(1, len(S)):
        diff = abs(S[i] - S[i-1])
        if diff < min_diff:
            min_diff = diff
            pair = (S[i-1], S[i])

    return pair, min_diff

S = [1, 3, 7, 9, 5]
pair, min_diff = find_min_difference_pair(S)
print(f"The pair with the minimum difference is {pair} with a difference of {min_diff}.")
