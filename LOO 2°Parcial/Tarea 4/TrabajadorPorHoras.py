# -*- coding: utf-8 -*-
"""
Created on Mon Apr 12 10:53:33 2021

@author: MedNo
"""

import Empleado as Emp

class TrabajadorPorHoras(Emp.Empleado):
    def __init__(self, nombre="", cantidad=0, pago=0):
        Emp.Empleado.__init__(self,nombre)
        if cantidad>0:
            self.__HorasTrabajadas = cantidad
        else:
            self.__HorasTrabajadas = 0
        if pago > 0:
            self.__pagoXhora = pago
        else:
            self.__pagoXhora = 0
            
    @property 
    def HorasTrabajadas(self):
        return self.__HorasTrabajadas
    @HorasTrabajadas.setter
    def HorasTrabajadas(self, cantidad):
        if cantidad>0:
            self.__HorasTrabajadas = cantidad
        else:
            self.__HorasTrabajadas = 0
    @property
    def pagoXhora(self):
        return self.__pagoXhora
    @pagoXhora.setter
    def pagoXhora(self, pago):
        if pago > 0:
            self.__pagoXhora = pago
        else:
            self.__pagoXhora = 0
            
    def pagoDiario(self):
        return self.__HorasTrabajadas * self.__pagoXhora
    
    def imprimir(self):
        print("Empleado tipo Trabajador por horas");
        print("NOMBRE: " + self.nombre + "\nPAGO POR HORA: " + str(self.__pagoXhora) + "\nCANTIDAD HORAS TRABAJADAS: " + str(self.__HorasTrabajadas) + "\nPAGO DIARIO: " + str(self.pagoDiario()))
   