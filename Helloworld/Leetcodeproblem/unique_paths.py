def unique_paths(m, n):
    """Count unique paths in grid."""
    dp = [1] * n
    for _ in range(m-1):
        for j in range(1, n):
            dp[j] += dp[j-1]
    return dp[-1]
