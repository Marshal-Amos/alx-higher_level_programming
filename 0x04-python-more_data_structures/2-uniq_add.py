#!/usr/bin/python3
def uniq_add(my_list=[]):
    uniq_sum = 0
    for item in set(my_list):
        uniq_sum += item
    return uniq_sum
