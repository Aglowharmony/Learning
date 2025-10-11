def generator_example(n):
    """A simple generator that yields numbers from 0 to n-1."""
    for i in range(n):
        yield i

# Example usage of the generator
if __name__ == "__main__":
    gen = generator_example(5)
    for value in gen:
        print(value)

# Explanation:
# This file demonstrates how to create a generator function using the 'yield' statement.
# Generators are a simple way to create iterators. They allow you to iterate over a sequence of values without storing them all in memory at once.
# The 'yield' statement pauses the function and saves its state, allowing it to resume where it left off when called again.