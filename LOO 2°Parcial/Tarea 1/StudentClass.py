# -*- coding: utf-8 -*-
"""
Created on Mon Mar  8 12:28:53 2021

@author: MedNo
"""

import PersonClass as Persona

class Student(Persona.Persona):
    def __init__(self, nombre, apellido, edad, day, month, year, nombre2, semestre, promedio):
        Persona.Persona.__init__(self,nombre, apellido, edad, day, month, year)
        self.__nombre2 = nombre2
        if(semestre<0):
            self.semestre = 0
        else:
            self.__semestre = semestre
        if(promedio<0):
            self.promedio = 0
        else:
            self.__promedio = promedio
    
    #Getters
    @property 
    def nombre2(self):
        return self.__nombre2
    @property
    def semestre(self):
        return self.__semestre
    @property
    def promedio(self):
        return self.__promedio
    
    #Setters
    @nombre2.setter
    def nombre2(self, value):
        self.__nombre2 = value
    @semestre.setter
    def semestre(self, value):
        self.__semestre = value
    @promedio.setter
    def promedio(self, value):
        self.__promedio = value
    
    #Prints
    def imprimir(self):
        Persona.Persona.imprimir(self)
        print("\nCARRERA: ", self.__nombre2, "\nSEMESTRE: ", self.__semestre,"\nPROMEDIO: ", self.__promedio)
       