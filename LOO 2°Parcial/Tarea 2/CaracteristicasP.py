# -*- coding: utf-8 -*-
"""
Created on Mon Mar 15 23:14:34 2021

@author: MedNo
"""

class Caracteristicas:
    def __init__(self,title, ci, year):
        self.__title = title
        if(year<0 and year >9999):
            self.__year = 1900
        else:
            self.__year = year
            
        if(ci<0):
            self.__ci = 0
        else:
            self.__ci = ci
            
    #Getters
    @property
    def title(self):
        return self.__title
    @property
    def ci(self):
        return self.__ci
    @property
    def year(self):
        return self.__year

    #Setters
    @title.setter
    def title(self, title):
        self.__title = title
    @ci.setter
    def ci(self, ci):
        self.__ci = ci
    @year.setter
    def year(self, year):
        self.__year = year
        
    #prints
    def imprimir(self):
        print("\nTitulo: ", self.__title, "\nCodigo de identificacion: ", self.__ci, "\nAño: ", self.__year)