def total_n_queens(n):
    """Return number of distinct solutions to n-queens."""
    res = 0
    def backtrack(row, cols, diag1, diag2):
        nonlocal res
        if row == n:
            res += 1
            return
        for col in range(n):
            if col in cols or row-col in diag1 or row+col in diag2:
                continue
            backtrack(row+1, cols|{col}, diag1|{row-col}, diag2|{row+col})
    backtrack(0, set(), set(), set())
    return res
