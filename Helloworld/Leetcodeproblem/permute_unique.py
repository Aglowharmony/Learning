def permute_unique(nums):
    """Return all unique permutations."""
    res = []
    nums.sort()
    def backtrack(path, used):
        if len(path) == len(nums):
            res.append(list(path))
            return
        for i in range(len(nums)):
            if used[i] or (i > 0 and nums[i] == nums[i-1] and not used[i-1]):
                continue
            used[i] = True
            path.append(nums[i])
            backtrack(path, used)
            path.pop()
            used[i] = False
    backtrack([], [False]*len(nums))
    return res
