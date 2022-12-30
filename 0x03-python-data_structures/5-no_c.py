#!/usr/bin/python3
def no_c(my_string):
    alpha = ""
    for letter in my_string:
        if (letter != "c") and (letter != "C"):
            alpha = alpha + letter

    return alpha
