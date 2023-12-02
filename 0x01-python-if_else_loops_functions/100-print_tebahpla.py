#!/usr/bin/python3
print(dir())
for i in range(122, 96, -1):
    if i % 2 == 1:
        i -= 32
    print("{}".format(chr(i)), end='')
print(dir(__builtins__))
