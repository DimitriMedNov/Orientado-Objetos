# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 14:43:24 2021

@author: usuario
"""

import Circle as Circ

class Cylinder(Circ.Circle):
    
    def __init__(self, x = 0, y = 0, radio = 0, altura = 0):
        Circ.Circle.__init__(self, x, y, radio)
        if (altura < 0):
            self.__altura = 0
        else:
            self.__altura = altura
            
    #Get
    @property
    def altura(self):
        return self.__altura

    #Set
    @altura.setter
    def altura(self, value):
        if (value < 0):
            self.__altura = 0
        else:
            self.__altura = value
            
    def shapename(self):
        return "Cilindro"

    def calcularea(self):
        return 2*(3.1416)*(self.radio)*(self.__altura) + ((2)*(3.1416)*(self.radio)*(self.radio))
    
    def calcularperimetro(self):
        return 0
    
    def calcularvolumen(self):
        return (3.1416)*(self.radio)*(self.radio)* (self.__altura)