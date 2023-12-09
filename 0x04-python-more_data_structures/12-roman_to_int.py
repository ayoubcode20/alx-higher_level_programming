#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str) or roman_string is None:
        return 0
    letters = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
               'C': 100, 'D': 500, 'M': 1000}
    length = len(roman_string)
    num = letters[roman_string[length - 1]]
    for i in range(length - 2, -1, -1):
        if letters[roman_string[i]] < letters[roman_string[i + 1]]:
            num -= letters[roman_string[i]]
        else:
            num += letters[roman_string[i]]
    return num
