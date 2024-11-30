# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 12:18:18 2021

@author: MedNo
"""

from abc import ABC, abstractmethod

class Empleado(ABC):
    def __init__(self, nombre=""):
        self.__nombre = nombre
    
    @property 
    def nombre(self):
        return self.__nombre
    @nombre.setter
    def nombre(self, value):
        self.__nombre = value
    
    @abstractmethod
    def pagoDiario(self):
        pass
    @abstractmethod
    def imprimir(self):
        pass