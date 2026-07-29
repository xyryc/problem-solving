# -*- coding: utf-8 -*-
"""
Created on Tue May 17 10:21:03 2022

@author: BAUST
"""

# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

class Person:
  def __init__(self, name, age, id_no, location):
    self.name = name
    self.age = age
    self.id_no = id_no
    self.location = location
    
  def display(self):
     print("\nHello, My name is ", name, ". I am ", age, "years old.",
              "My id is ", id_no, ". "
              "I am from ", location, ". Thank you.")
        

name = str(input("Enter name: "))
age = int(input("Enter age: "))
id_no = int(input("Enter id: "))
location = str(input("Enter location: "))

ob1 = Person(name, age, id_no, location)

ob1.display()