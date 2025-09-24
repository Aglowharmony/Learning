def climb_stairs(n):
    """Count distinct ways to climb stairs."""
    a, b = 1, 1
    for _ in range(n):
        a, b = b, a + b
    return a
