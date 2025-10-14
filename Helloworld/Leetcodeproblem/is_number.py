def is_number(s):
    """Validate if string is a number."""
    try:
        float(s)
        return True
    except:
        return False
