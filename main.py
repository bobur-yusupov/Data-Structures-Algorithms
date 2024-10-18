#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    s = input()
    
    s_map = {}
    
    for letter in s:
        if letter in s_map:
            s_map[letter] += 1
            
        else:
            s_map[letter] = 1
            
    s_sorted = dict(sorted(s_map.items(), key=lambda item: (item[1], item[0])))

    
    
    for i in s_sorted.items():
        print(f"{i[0]}{i[1]}")