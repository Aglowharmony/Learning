from collections import defaultdict

def group_anagrams(strs):
    """Group anagrams together."""
    res = defaultdict(list)
    for s in strs:
        key = tuple(sorted(s))
        res[key].append(s)
    return list(res.values())
