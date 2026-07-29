# -*- coding: utf-8 -*-
"""
Created on Sun May  8 21:46:43 2022

@author: Adrik
"""

heired = 0
untreated = 0

n = int(input())

crimes_list = list(map(int, input().split()))

for i in range(n):
    if crimes_list[i] == abs(crimes_list[i]):
        heired += crimes_list[i]
        continue
    if heired > 0:
        heired -= 1
        continue
    if heired == 0:
        untreated += 1

print(untreated)