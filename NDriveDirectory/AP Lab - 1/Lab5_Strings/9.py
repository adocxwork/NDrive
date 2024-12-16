def reverse(s):
    ans = ''
    l = len(s)
    for i in range(l-1, -1, -1):
        ans += s[i]
    return ans

print(reverse("I am testing"))