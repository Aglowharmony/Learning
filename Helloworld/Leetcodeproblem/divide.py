def divide(dividend, divisor):
    """Divide two integers without using multiplication, division, mod."""
    INT_MAX, INT_MIN = 2**31 - 1, -2**31
    sign = (dividend > 0) == (divisor > 0)
    dividend, divisor = abs(dividend), abs(divisor)
    res = 0
    while dividend >= divisor:
        temp, i = divisor, 1
        while dividend >= temp:
            dividend -= temp
            res += i
            temp <<= 1
            i <<= 1
    res = res if sign else -res
    return min(max(INT_MIN, res), INT_MAX)
