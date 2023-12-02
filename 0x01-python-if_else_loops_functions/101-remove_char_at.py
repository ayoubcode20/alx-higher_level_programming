#!/usr/bin/python3
def remove_char_at(str, n):
    if 0 <= n < len(str):
        res = ''
        for i in range(len(str)):
            if i != n:
                res += str[i]
        return res
    else:
        return s
