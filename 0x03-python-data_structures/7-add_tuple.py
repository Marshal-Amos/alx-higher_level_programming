#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    if (len(tuple_a) >= 2):
        a = tuple_a[0]
        b = tuple_a[1]
    elif (len(tuple_a) == 1):
        a = tuple_a[0]
        b = 0
    else:
        a = 0
        b = 0

    if (len(tuple_b) >= 2):
        x = tuple_b[0]
        y = tuple_b[1]
    elif (len(tuple_b) == 1):
        x = tuple_b[0]
        y = 0
    else:
        x = 0
        y = 0

    return a + x, b + y
