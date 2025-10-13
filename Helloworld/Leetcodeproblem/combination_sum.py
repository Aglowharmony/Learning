def combination_sum(candidates, target):
    """Find all unique combinations that sum to target."""
    res = []
    def backtrack(remain, comb, start):
        if remain == 0:
            res.append(list(comb))
            return
        for i in range(start, len(candidates)):
            if candidates[i] > remain:
                continue
            comb.append(candidates[i])
            backtrack(remain - candidates[i], comb, i)
            comb.pop()
    backtrack(target, [], 0)
    return res
