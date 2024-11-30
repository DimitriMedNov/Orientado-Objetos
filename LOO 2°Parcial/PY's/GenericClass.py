# -*- coding: utf-8 -*-
"""
Created on Fri Mar 26 12:46:20 2021

@author: MedNo
"""

class GenericClass:
    def __init__(self, val):
        self.__value = val
    
    @property
    def value(self):
        return self.__value
    
    @value.setter
    def value(self, val):
        self.__value = val
        
    def showType(self):
        print("lo que regresa tipo: " + str(type(self.__value)))
        print("Valor: " + str(self.__value))
   