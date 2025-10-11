# Contents of /python-intermediate-concepts/python-intermediate-concepts/src/concept02_dicts.py

def create_dict():
    # Creating a dictionary
    my_dict = {
        "name": "Alice",
        "age": 30,
        "city": "New York"
    }
    return my_dict

def access_values():
    # Accessing values in a dictionary
    my_dict = create_dict()
    name = my_dict["name"]
    age = my_dict["age"]
    return name, age

def dictionary_methods():
    # Using dictionary methods
    my_dict = create_dict()
    
    # Getting keys, values, and items
    keys = my_dict.keys()
    values = my_dict.values()
    items = my_dict.items()
    
    return keys, values, items

if __name__ == "__main__":
    print("Dictionary:", create_dict())
    print("Accessed Values:", access_values())
    print("Dictionary Methods:")
    print("Keys:", dictionary_methods()[0])
    print("Values:", dictionary_methods()[1])
    print("Items:", dictionary_methods()[2])