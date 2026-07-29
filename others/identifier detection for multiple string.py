import re

regex = '^[A-Za-z_][A-Za-z0-9_]*'

string = input("Enter string to check: ")

if(re.search(regex, string)):
    print(string+":"+"It is a valid identifier")
else:
    print(string+":"+"It is not a valid identifier")