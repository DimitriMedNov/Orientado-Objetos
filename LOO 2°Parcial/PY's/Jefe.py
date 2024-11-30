# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 12:23:32 2021

@author: MedNo
"""

import Empleado as Emp

class Jefe(Emp.Empleado):
    def __init__(self, nombre="", salario=0):
        Emp.Empleado.__init__(self,nombre)
        if(salario>0):
            self.__salarioSemanal = salario
        else:
            self.__salarioSemanal = 0
            
    @property
    def salarioSemanal(self):
        return self.__salarioSemanal
    
    @salarioSemanal.setter
    def salarioSemanal(self, value):
        if(value>0):
            self.__salarioSemanal = value
        else:
            self.__salarioSemanal = 0
            
    def pagoDiario(self):
        return self.__salarioSemanal / 5
    
    def imprimir(self):
        print("Empleado tipo JEFE");
        print("NOMBRE: " + self.nombre + "\nSALARIO SEMANAL: " + str(self.__salarioSemanal) + "\nPAGO DIARIO: " + str(self.pagoDiario()))
        
      