# -*- coding: utf-8 -*-
"""
Created on Tue Apr 26 09:46:31 2022

@author: Adrik
"""

def multi_func(a, b):
    return a * b



n = int(input("Enter a number: "))

for i in range(n): 
    print(i, "*", n,"=", multi_func(i, n))