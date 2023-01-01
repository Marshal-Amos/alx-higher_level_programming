#!/usr/bin/python3
def max_integer(my_list=[]):
    if (len(my_list) == 0):
        return

    list_max = my_list[0]

    for item in my_list:
        if (item > list_max):
            list_max = item

    return list_max
