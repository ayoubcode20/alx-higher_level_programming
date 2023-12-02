#!/usr/bin/python3
import sys
if __name__ == '__main__':
    length = len(sys.argv) - 1
    if length == 0:
        print("{} arguments.".format(length))
    elif length == 1:
        print("{} argument:".format(length))
        print("{}: {}".format(length, sys.argv[length]))
    else:
        print("{} arguments:".format(length))
        i = 1
        while i <= length:
            print("{}: {}".format(i, sys.argv[i]))
            i += 1
