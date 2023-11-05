#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if idx >= 0 and idx < len(my_list):
        nlist = []
        nlist += my_list
        nlist[idx] = element
        return nlist
    return my_list
