# -*- coding: utf-8 -*-
"""
Created on Mon May 30 22:19:13 2022

@author: Adrik
"""


list1 = []

num = int(input("Enter number of elements: "))
 

for i in range(num):
    ele = int(input("Enter elements: "))
    list1.append(ele)
 
firstMax = max(list1[0],list1[1])
secondMax = min(list1[0],list1[1])

n =len(list1)

for i in range(2,n):
    if list1[i] > firstMax:
        secondMax = firstMax
        firstMax = list1[i]
        
    elif list1[i]> secondMax:
        secondMax = list1[i]
 
print("Second highest number is : ", secondMax)