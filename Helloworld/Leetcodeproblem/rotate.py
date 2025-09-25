def rotate(matrix):
    """Rotate image by 90 degrees."""
    matrix[:] = zip(*matrix[::-1])
