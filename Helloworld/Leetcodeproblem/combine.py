def combine(n, k):
    """Return all possible combinations of k numbers out of n."""
    res = []
    def backtrack(start, comb):
        if len(comb) == k:
            res.append(list(comb))
            return
        for i in range(start, n+1):
            comb.append(i)
            backtrack(i+1, comb)
            comb.pop()
    backtrack(1, [])
    return res
