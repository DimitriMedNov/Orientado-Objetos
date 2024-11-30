# -*- coding: utf-8 -*-
"""
Created on Mon Mar  8 12:28:53 2021

@author: MedNo
"""

class Persona:
    def __init__(self,nombre, apellido, edad, day, month, year):
        self.__nombre = nombre
        self.__apellido = apellido
        if(edad<0):
            self.__edad = 0
        else:
            self.__edad = edad
        if(day<0 and day >= 32):
            self.__day = 1
        else:
            self.__day = day
        if(month < 0 and month >=13):
            self.__month = 1
        else:
            self.__month = month
        if(year<0 and year >9999):
            self.__year = 1900
        else:
            self.__year = year
            
    #Getters
    @property
    def nombre(self):
        return self.__nombre
    @property
    def apellido(self):
        return self.__apellido
    @property
    def edad(self):
        return self.__edad
    @property
    def day(self):
        return self.__day
    @property
    def month(self):
        return self.__month
    @property
    def year(self):
        return self.year
    #Setters
    @nombre.setter
    def nombre(self, nombre):
        self.__nombre = nombre
    @apellido.setter
    def apellido(self, apellido):
        self.__apellido = apellido
    @edad.setter
    def edad(self, edad):
        self.__edad = edad
    @day.setter
    def day(self, day):
        self.__day = day
    @month.setter
    def month(self, month):
        self.__month = month
    @year.setter
    def year(self, year):
        self.year = year
    #prints
    def imprimir(self):
        print("NOMBRE: ", self.__nombre, "\nAPELLIDO: ", self.__apellido, "\nEDAD: ", self.__edad,"\nDate", self.__day,"/",self.__month,"/",self.__year)
  