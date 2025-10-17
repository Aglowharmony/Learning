def remove_element(nums, val):
    """Remove all instances of val in-place."""
    i = 0
    for j in range(len(nums)):
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i
