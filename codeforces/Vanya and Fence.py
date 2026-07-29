# -*- coding: utf-8 -*-
"""
Created on Tue May 10 00:19:52 2022

@author: Adrik

A. Vanya and Fence
"""

n, h = map(int, input().split())
count = 0

var = list(map(int, input().split()))
  
for i in range(n):
    if var[i] > h:
        count += 2
    else:
        count += 1
   
  
print(count)

