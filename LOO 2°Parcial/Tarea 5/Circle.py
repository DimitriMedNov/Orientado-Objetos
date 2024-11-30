# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 14:41:47 2021

@author: usuario
"""


import Point2D as Punto

class Circle(Punto.Point2D):
    
    def __init__(self, x = 0, y = 0, radio = 0):
        
        Punto.Point2D.__init__(self, x, y)
        if (radio < 0):
            self.__radio = 0
        else:
            self.__radio = radio
            

    @property
    def radio(self):
        return self.__radio

    
    @radio.setter
    def radio(self, value):
        if (value < 0):
            self.__radio = 0
        else:
            self.__radio = value

    def shapename(self):
        return "Circulo"

    def calcularea(self):
        return self.__radio * self.__radio * 3.1416
    
    def calcularperimetro(self):
        return self.__radio * 2 * 3.1416
    
    def calcularvolumen(self):
        return 0