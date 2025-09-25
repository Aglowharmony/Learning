def unique_paths_with_obstacles(obstacleGrid):
    """Count unique paths in grid with obstacles."""
    m, n = len(obstacleGrid), len(obstacleGrid[0])
    dp = [0] * n
    dp[0] = 1
    for i in range(m):
        for j in range(n):
            if obstacleGrid[i][j]:
                dp[j] = 0
            elif j > 0:
                dp[j] += dp[j-1]
    return dp[-1]
