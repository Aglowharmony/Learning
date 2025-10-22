def two_sum(nums, target):
    """Return indices of the two numbers such that they add up to target."""
    lookup = {}
    for i, num in enumerate(nums):
        if target - num in lookup:
            return [lookup[target - num], i]
        lookup[num] = i
