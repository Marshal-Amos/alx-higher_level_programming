#!/usr/bin/python3
def remove_char_at(str, n):
    j = 0
    for i in str:
        if j != n:
            print("{}".format(i), end="")
        j += 1
    return ("")
