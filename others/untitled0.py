# -*- coding: utf-8 -*-
"""
Created on Tue May 17 10:04:54 2022

@author: BAUST
"""

class Person( object ):
		def __init__(self, name, idnumber):
				self.name = name
				self.idnumber = idnumber
		def display(self):
				print(self.name)
				print(self.idnumber)

class Employee( Person ):		
		def __init__(self, name, idnumber, salary, post):
				self.salary = salary
				self.post = post

				Person.__init__(self, name, idnumber)


a = Employee('Anik', 886012, 200000, "Intern")

a.display()
