# -*- coding: utf-8 -*-
"""
Created on Mon Mar 15 23:14:33 2021

@author: MedNo
"""

import CaracteristicasP as Caracteristicas

class Book:
    def __init__(self,autor, editorial,title, ci, year):
        self.__autor = autor
        self.__editorial = editorial
        self.__caracteristicas = Caracteristicas.Caracteristicas(title, ci, year)
        
    #Getters
    @property 
    def autor(self):
        return self.__autor
    @property
    def editorial(self):
        return self.__editorial

    #Setters
    @autor.setter
    def autor(self, autor):
        self.__autor = autor
    @editorial.setter
    def editorial(self, editorial):
        self.__editorial = editorial
        
    def showDetails(self):
        print("\nAutor: ", self.__autor, "\nEditorial: ", self.__editorial)
        self.__caracteristicas.imprimir()