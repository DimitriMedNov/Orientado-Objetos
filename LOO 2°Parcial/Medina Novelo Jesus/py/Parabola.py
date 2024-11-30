# -*- coding: utf-8 -*-
"""
Created on Fri Apr 30 13:01:15 2021

@author: MedNo
"""

class Parabola:
    def init(self, x=0, y=0, d=0):
        self.__vertice = Punto.Punto2D2D(x, y)
        self.__distanciaF = d
        self.__tipo