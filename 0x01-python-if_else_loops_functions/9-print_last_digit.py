#!/usr/bin/python3
def print_last_digit(number):
    num = abs(number)
    print(num % 10, end='')
    return num % 10
