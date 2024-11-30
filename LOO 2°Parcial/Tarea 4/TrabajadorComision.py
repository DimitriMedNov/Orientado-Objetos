# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 12:23:11 2021

@author: MedNo
"""

import Empleado as Emp

class TrabajadorComision(Emp.Empleado):
    def __init__(self, nombre="", salario=0, comision=0, ventas=0):
        Emp.Empleado.__init__(self,nombre)
        if salario>0:
            self.__salariobase = salario
        else:
            self.__salariobase = 0
        if comision>=0 and comision<=1:
            self.__porcentajecomision = comision
        else:
            self.__porcentajecomision = 0
        if ventas>0:
            self.__montoventas = ventas
        else:
            self.__montoventas = 0
            
    @property 
    def salariobase(self):
        return self.__salariobase
    
    @salariobase.setter
    def salariobase(self, salario):
        if salario>0:
            self.__salariobase = salario
        else:
            self.__salariobase = 0
    
    @property
    def porcentajecomision(self):
        return self.__porcentajecomision
    @porcentajecomision.setter
    def porcentajecomision(self, comision):
        if comision>=0 and comision<=1:
            self.__porcentajecomision = comision
        else:
            self.__porcentajecomision = 0
    
    @property 
    def montoventas(self):
        return self.__montoventas
    
    @montoventas.setter
    def montoventas(self, ventas):
        if ventas>0:
            self.__montoventas = ventas
        else:
            self.__montoventas = 0
            
    def pagoDiario(self):
        return self.__salariobase + self.__porcentajecomision * self.__montoventas
    
    def imprimir(self):
        print("Empleado tipo TRABAJADOR POR COMISIÓN");
        print("NOMBRE: " + self.nombre + "\nSALARIO BASE: " + str(self.__salariobase) + "\nPORCENTAJE COMISIÓN: " + str(self.__porcentajecomision*100) + "\nMONTO VENTAS: " + str(self.__montoventas) + "\nPAGO DIARIO: " + str(self.pagoDiario()))
        