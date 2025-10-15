def length_of_last_word(s):
    """Return length of last word."""
    return len(s.rstrip().split(' ')[-1])
