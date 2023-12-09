#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        largest = max(list(my_dict.values()))
        for k in a_dictionary:
            if a_dictionary[k] == largest:
                return k
    return None
