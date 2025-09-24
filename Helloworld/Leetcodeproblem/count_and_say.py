def count_and_say(n):
    """Return the nth term of the count-and-say sequence."""
    s = "1"
    for _ in range(n-1):
        prev, count, curr = s[0], 0, ""
        for c in s:
            if c == prev:
                count += 1
            else:
                curr += str(count) + prev
                prev = c
                count = 1
        curr += str(count) + prev
        s = curr
    return s
