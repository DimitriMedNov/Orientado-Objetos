# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 14:40:04 2021

@author: usuario
"""

from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def shapename(self):
        pass
    
    @abstractmethod
    def calcularea(self):
        pass

    @abstractmethod
    def calcularperimetro(self):
        pass

    @abstractmethod
    def calcularvolumen(self):
        pass