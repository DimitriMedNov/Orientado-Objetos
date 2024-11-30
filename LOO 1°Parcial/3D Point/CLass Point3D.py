# -*- coding: utf-8 -*-
"""
Created on Mon Feb 22 23:08:10 2021

@author: MedNo
"""

class Point3D:
    def __init__(self, x = 0, y = 0, z = 0):
        self.__x = x
        self.__y = x
        self.__z = y
       
    def __init__(self rx, ry, rz):
        self.__rx = 0
        self.__ry = 0
        self.__rz = 0
    
    def trasladar(self, dx, dy, dz):
        self.__x += dx
        self.__y += dy
        self.__z += dz
        
    def angulos(self ax, ay, az):
        self.__rx = ((cos(y * 3.1416 / ay)) - (sin(z * 3.1416 / az))) / ((sin(y * 3.1416 / ay)) + (cos(z * 3.1416 / az)))
        self.__ry = ((cos(z * 3.1416 / az)) - (sin(x * 3.1416 / ax))) / ((sin(z * 3.1416 / az)) + (cos(x * 3.1416 / ax)))
        self.__rz = ((cos(x * 3.1416 / ax)) - (sin(y * 3.1416 / ay))) / ((sin(x * 3.1416 / ax)) + (cos(y * 3.1416 / ay)))
        
    def imprimir(self):
        print("("+self.__x+","+self.__y+","+self.__z+")")
        
    def printRotacion(self):
        print("("+self.__rx+","+self.__ry+","+self.__rz+")")