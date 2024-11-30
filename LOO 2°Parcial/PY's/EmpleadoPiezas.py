# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 12:23:24 2021

@author: MedNo
"""

import Empleado as Emp

class EmpleadoPiezas(Emp.Empleado):
    def __init__(self, nombre="", cantidad=0, pago=0):
        Emp.Empleado.__init__(self,nombre)
        if cantidad>0:
            self.__cantidadpiezas = cantidad
        else:
            self.__cantidadpiezas = 0
        if pago > 0:
            self.__pagoxpieza = pago
        else:
            self.__pagoxpieza = 0
    
    @property 
    def cantidadpiezas(self):
        return self.__cantidadpiezas
    @cantidadpiezas.setter
    def cantidadpiezas(self, cantidad):
        if cantidad>0:
            self.__cantidadpiezas = cantidad
        else:
            self.__cantidadpiezas = 0
    @property
    def pagoxpieza(self):
        return self.__pagoxpieza
    @pagoxpieza.setter
    def pagoxpieza(self, pago):
        if pago > 0:
            self.__pagoxpieza = pago
        else:
            self.__pagoxpieza = 0
    
    def pagoDiario(self):
        return self.__cantidadpiezas * self.__pagoxpieza
    
    def imprimir(self):
        print("Empleado tipo TRABAJADOR POR PIEZAS");
        print("NOMBRE: " + self.nombre + "\nPAGO POR PIEZA: " + str(self.__pagoxpieza) + "\nCANTIDAD PIEZAS HECHAS: " + str(self.__cantidadpiezas) + "\nPAGO DIARIO: " + str(self.pagoDiario()))
    
