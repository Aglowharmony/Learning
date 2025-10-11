# Contents of /python-intermediate-concepts/python-intermediate-concepts/src/concept04_tuples.py

def main():
    # Creating a tuple
    my_tuple = (1, 2, 3, 4, 5)
    print("Original Tuple:", my_tuple)

    # Accessing elements
    print("First Element:", my_tuple[0])
    print("Last Element:", my_tuple[-1])

    # Slicing a tuple
    sliced_tuple = my_tuple[1:4]
    print("Sliced Tuple (index 1 to 3):", sliced_tuple)

    # Tuple concatenation
    another_tuple = (6, 7, 8)
    concatenated_tuple = my_tuple + another_tuple
    print("Concatenated Tuple:", concatenated_tuple)

    # Tuple repetition
    repeated_tuple = my_tuple * 2
    print("Repeated Tuple:", repeated_tuple)

    # Checking membership
    print("Is 3 in my_tuple?", 3 in my_tuple)

    # Length of a tuple
    print("Length of my_tuple:", len(my_tuple))

if __name__ == "__main__":
    main()