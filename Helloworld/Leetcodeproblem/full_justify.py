def full_justify(words, maxWidth):
    """Justify text to maxWidth."""
    res, cur, num_of_letters = [], [], 0
    for w in words:
        if num_of_letters + len(w) + len(cur) > maxWidth:
            for i in range(maxWidth - num_of_letters):
                cur[i % (len(cur)-1 or 1)] += ' '
            res.append(''.join(cur))
            cur, num_of_letters = [], 0
        cur.append(w)
        num_of_letters += len(w)
    res.append(' '.join(cur).ljust(maxWidth))
    return res
