# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 12:29:35 2021

@author: MedNo
"""

class Persona:
    def __init__(self,nombre, apellido, edad):
        self.__nombre = nombre
        self.__apellido = apellido
        if(edad<0):
            self.__edad = 0
        else:
            self.__edad = edad
            
    @property
    def nombre(self):
        return self.__nombre
    @property
    def apellido(self):
        return self.__apellido
    @property
    def edad(self):
        return self.__edad
    @nombre.setter
    def nombre(self, nombre):
        self.__nombre = nombre
    @apellido.setter
    def apellido(self, apellido):
        self.__apellido = apellido
    @edad.setter
    def edad(self, edad):
        self.__edad = edad
    
    def imprimir(self):
        print("NOMBRE: ", self.__nombre, "\nAPELLIDO: ", self.__apellido, "\nEDAD: ", self.__edad)
        
