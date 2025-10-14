def find_substring(s, words):
    """Find all starting indices of substring(s) formed by concatenation of all words."""
    if not s or not words:
        return []
    word_len = len(words[0])
    total_len = word_len * len(words)
    word_count = {}
    for word in words:
        word_count[word] = word_count.get(word, 0) + 1
    res = []
    for i in range(len(s) - total_len + 1):
        seen = {}
        for j in range(0, total_len, word_len):
            word = s[i+j:i+j+word_len]
            if word in word_count:
                seen[word] = seen.get(word, 0) + 1
                if seen[word] > word_count[word]:
                    break
            else:
                break
        else:
            res.append(i)
    return res
