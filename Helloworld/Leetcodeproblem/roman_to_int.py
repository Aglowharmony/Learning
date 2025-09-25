def roman_to_int(s):
    """Convert Roman numeral to integer."""
    roman = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    res, prev = 0, 0
    for c in reversed(s):
        if roman[c] < prev:
            res -= roman[c]
        else:
            res += roman[c]
        prev = roman[c]
    return res
