# -*- coding: utf-8 -*-
"""
Created on Tue May 10 01:03:51 2022

@author: Adrik

A. Is your horseshoe on the other hoof?
"""

count = 0

colors = list(map(int, input().split()))
colors.sort()

for i in range(len(colors)):
    if colors[i] != colors[i+1]:
        count += 1
    else:
        continue

print(4 - count)