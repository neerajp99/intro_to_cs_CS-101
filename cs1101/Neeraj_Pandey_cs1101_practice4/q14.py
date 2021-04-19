"""
    Merge two dictionaries into one. Make sure repeated entries appear only once. 

"""
dict1 = {"a": 1, "b": 2, "c": 3}
dict2 = {"b": 2, "d": 4, "e": 5}
# Using **kwargs
print({**dict1, **dict2})
# Using comprehensions
print({item: val for d in (dict1, dict2) for item, val in d.items()})