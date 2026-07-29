# -*- coding: utf-8 -*-
"""
Created on Tue Apr 26 10:03:01 2022

@author: Adrik
"""

n = int(input("Enter a number: "))

for i in range(n):
    p = lambda i, n : i*n
    print(i, "*", n, " = ", p(i, n))