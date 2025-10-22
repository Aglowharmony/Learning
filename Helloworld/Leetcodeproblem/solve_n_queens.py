def solve_n_queens(n):
    """Solve the n-queens puzzle."""
    res = []
    def backtrack(row, cols, diag1, diag2, board):
        if row == n:
            res.append([''.join(r) for r in board])
            return
        for col in range(n):
            if col in cols or row-col in diag1 or row+col in diag2:
                continue
            board[row][col] = 'Q'
            backtrack(row+1, cols|{col}, diag1|{row-col}, diag2|{row+col}, board)
            board[row][col] = '.'
    board = [['.']*n for _ in range(n)]
    backtrack(0, set(), set(), set(), board)
    return res
