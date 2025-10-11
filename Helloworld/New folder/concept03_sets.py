# Contents of /python-intermediate-concepts/python-intermediate-concepts/src/concept03_sets.py

# Sets in Python

# A set is an unordered collection of unique elements. Sets are useful when you want to store multiple items in a single variable and ensure that there are no duplicates.

# Creating a Set
my_set = {1, 2, 3, 4, 5}
print("Initial set:", my_set)

# Adding elements to a set
my_set.add(6)
print("Set after adding 6:", my_set)

# Removing elements from a set
my_set.remove(3)
print("Set after removing 3:", my_set)

# Union of sets
set_a = {1, 2, 3}
set_b = {3, 4, 5}
union_set = set_a.union(set_b)
print("Union of set_a and set_b:", union_set)

# Intersection of sets
intersection_set = set_a.intersection(set_b)
print("Intersection of set_a and set_b:", intersection_set)

# Difference of sets
difference_set = set_a.difference(set_b)
print("Difference of set_a and set_b:", difference_set)

# Checking membership
print("Is 2 in set_a?", 2 in set_a)
print("Is 4 in set_a?", 4 in set_a)

# Set comprehension
squared_set = {x**2 for x in range(6)}
print("Set of squared numbers:", squared_set)