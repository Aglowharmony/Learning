def search_range(nums, target):
    """Find first and last position of target."""
    def find_left():
        l, r = 0, len(nums)
        while l < r:
            m = (l + r) // 2
            if nums[m] < target:
                l = m + 1
            else:
                r = m
        return l

    def find_right():
        l, r = 0, len(nums)
        while l < r:
            m = (l + r) // 2
            if nums[m] <= target:
                l = m + 1
            else:
                r = m
        return l

    left = find_left()
    right = find_right() - 1
    if left <= right and right < len(nums) and nums[left] == target and nums[right] == target:
        return [left, right]
    return [-1, -1]
