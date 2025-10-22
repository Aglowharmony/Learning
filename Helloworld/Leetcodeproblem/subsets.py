def subsets(nums):
    """Return all possible subsets."""
    res = [[]]
    for num in nums:
        res += [item + [num] for item in res]
    return res
