#!/usr/bin/python3
import sys
if __name__ == '__main__':
    length = len(sys.argv) - 1
    result = 0
    i = 1
    while i <= length:
        result += int(sys.argv[i])
        i += 1
    print(result)
