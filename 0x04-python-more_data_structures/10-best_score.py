#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        largest = 0
        for key in a_dictionary:
            if a_dictionary[key] > largest:
                largest = a_dictionary[key]
        return largest:
    return None
