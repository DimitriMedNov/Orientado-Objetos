# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 12:54:50 2021

@author: MedNo
"""

import Clase_Persona_PY as Persona

class Empleado(Persona.Persona):
    def __init__(self, nombre, apellido, edad, puesto, salario):
        Persona.Persona.__init__(self,nombre, apellido, edad)
        self.__puesto = puesto
        if(salario<0):
            self.__salario = 0
        else:
            self.__salario = salario
    @property 
    def puesto(self):
        return self.__puesto
    @property
    def salario(self):
        return self.__salario
    @puesto.setter
    def puesto(self, value):
        self.__puesto = value
        
    @salario.setter
    def salario(self, value):
        self.__salario = value
    
    def imprimir(self):
        Persona.Persona.imprimir(self)
        print("\nPUESTO: ", self.__puesto, "\nSALARIO: ", self.__salario)
        
