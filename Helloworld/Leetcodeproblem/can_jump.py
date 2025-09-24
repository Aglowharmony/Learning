def can_jump(nums):
    """Determine if you can reach the last index."""
    farthest = 0
    for i, num in enumerate(nums):
        if i > farthest:
            return False
        farthest = max(farthest, i + num)
    return True
