# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 14:40:54 2021

@author: usuario
"""

import Shape as shap

class Point2D(shap.Shape):
    def __init__(self, x = 0, y = 0):
        shap.Shape.__init__(self)
        self.__x = x
        self.__y = y
        
    @property
    def x(self):
        return self.__x

    @property
    def y(self):
        return self.__y
    
    @x.setter
    def x(self, value):
        self.__x = value
        
    @y.setter
    def y(self, value):
        self.__y = value
    
    def shapename(self):
        return "Punto en 2D"
    def calcularea(self):
        return 0
    
    def calcularperimetro(self):
        return 0
    
    def calcularvolumen(self):
        return 0