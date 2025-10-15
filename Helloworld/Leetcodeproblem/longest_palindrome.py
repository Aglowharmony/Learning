def longest_palindrome(s):
    """Find the longest palindromic substring."""
    if not s:
        return ""
    start, end = 0, 0
    for i in range(len(s)):
        l1 = expand(s, i, i)
        l2 = expand(s, i, i+1)
        l = max(l1, l2)
        if l > end - start:
            start = i - (l - 1) // 2
            end = i + l // 2
    return s[start:end+1]

def expand(s, left, right):
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1
    return right - left - 1
