# -*- coding: utf-8 -*-
"""
Created on Sun May 15 13:03:20 2022

@author: Adrik
"""

def postfix_evaluation(s):
    n=len(s)
    stack =[]

    for i in range(n):
        if s[i].isdigit():
            stack.append(int(s[i]))

        elif s[i]=="+":
            a=stack.pop()
            b=stack.pop()
            stack.append(int(a)+int(b))

        elif s[i]=="*":
            a=stack.pop()
            b=stack.pop()
            stack.append(int(a)*int(b))

        elif s[i]=="/":
            a=stack.pop()
            b=stack.pop()
            stack.append(int(b)/int(a))

        elif s[i]=="-":
            a=stack.pop()
            b=stack.pop()
            stack.append(int(b)-int(a))            

    return stack.pop()

s = list(map(str, input("Enter the postfix notation: ").split()))
val=postfix_evaluation(s)
print("Result:", val)