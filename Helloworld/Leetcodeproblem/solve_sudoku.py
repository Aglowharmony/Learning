def solve_sudoku(board):
    """Solve a Sudoku puzzle."""
    def is_valid(i, j, c):
        for k in range(9):
            if board[i][k] == c or board[k][j] == c or board[3*(i//3)+k//3][3*(j//3)+k%3] == c:
                return False
        return True

    def backtrack():
        for i in range(9):
            for j in range(9):
                if board[i][j] == '.':
                    for c in '123456789':
                        if is_valid(i, j, c):
                            board[i][j] = c
                            if backtrack():
                                return True
                            board[i][j] = '.'
                    return False
        return True

    backtrack()
