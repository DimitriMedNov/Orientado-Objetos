# -*- coding: utf-8 -*-
"""
Created on Mon Mar 15 23:14:29 2021

@author: MedNo
"""

import CaracteristicasP as Caracteristicas

class Magazine:
    def __init__(self,title, ci, year,volumen):
        self.__volumen = volumen
        self.__caracteristicas = Caracteristicas.Caracteristicas(title, ci, year)
        
        #Getters
    @property 
    def volumen(self):
        return self.__volumen

    #Setters
    @volumen.setter
    def volumen(self, volumen):
        self.__volumen = volumen
        
    def showDetails(self):
        self.__caracteristicas.imprimir()
        print("\nVolumen: ", self.__volumen)