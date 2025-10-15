def jump(nums):
    """Find minimum jumps to reach the end."""
    jumps = end = farthest = 0
    for i in range(len(nums)-1):
        farthest = max(farthest, i + nums[i])
        if i == end:
            jumps += 1
            end = farthest
    return jumps
