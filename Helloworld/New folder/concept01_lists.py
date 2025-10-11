# Contents of the file: /python-intermediate-concepts/python-intermediate-concepts/src/concept01_lists.py

def create_list():
    # Creating a list
    my_list = [1, 2, 3, 4, 5]
    return my_list

def access_list_elements(my_list):
    # Accessing elements by index
    first_element = my_list[0]
    last_element = my_list[-1]
    return first_element, last_element

def slice_list(my_list):
    # Slicing a list
    sub_list = my_list[1:4]  # Gets elements from index 1 to 3
    return sub_list

def modify_list(my_list):
    # Modifying a list
    my_list.append(6)  # Adding an element
    my_list.remove(2)  # Removing an element
    my_list.sort()     # Sorting the list
    return my_list

if __name__ == "__main__":
    my_list = create_list()
    print("Original List:", my_list)
    print("Accessed Elements:", access_list_elements(my_list))
    print("Sliced List:", slice_list(my_list))
    modified_list = modify_list(my_list)
    print("Modified List:", modified_list)