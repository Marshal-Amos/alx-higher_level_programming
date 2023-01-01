#!/usr/bin/python3
def max_integer(my_list=[]):
    list_max = my_list[0]

    if (len(my_list) == 0):
        return

    for item in my_list:
        if (item > list_max):
            list_max = item

    return list_max
