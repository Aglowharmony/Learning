def letter_combinations(digits):
    """Return all possible letter combinations for phone number digits."""
    if not digits:
        return []
    phone = {"2": "abc", "3": "def", "4": "ghi", "5": "jkl", "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz"}
    res = ['']
    for d in digits:
        res = [prefix + char for prefix in res for char in phone[d]]
    return res
