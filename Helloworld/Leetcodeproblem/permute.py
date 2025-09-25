def permute(nums):
    """Return all possible permutations."""
    res = []
    def backtrack(path, used):
        if len(path) == len(nums):
            res.append(list(path))
            return
        for i in range(len(nums)):
            if not used[i]:
                used[i] = True
                path.append(nums[i])
                backtrack(path, used)
                path.pop()
                used[i] = False
    backtrack([], [False]*len(nums))
    return res
