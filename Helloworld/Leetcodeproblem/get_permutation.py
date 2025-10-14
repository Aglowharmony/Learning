def get_permutation(n, k):
    """Return kth permutation sequence."""
    import math
    nums = list(map(str, range(1, n+1)))
    k -= 1
    res = ''
    for i in range(n, 0, -1):
        idx = k // math.factorial(i-1)
        res += nums.pop(idx)
        k %= math.factorial(i-1)
    return res
