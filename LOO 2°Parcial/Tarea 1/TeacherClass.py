# -*- coding: utf-8 -*-
"""
Created on Mon Mar  8 12:28:31 2021

@author: MedNo
"""
import PersonClass as Persona
import CourseClass as Course

class Teacher(Persona.Persona):
    def __init__(self, nombre, apellido, edad, day, month, year, grade, Type, materia, nrc, cr):
        Persona.Persona.__init__(self,nombre, apellido, edad, day, month, year)        
        self.__grade = grade
        self.__Type = Type
        self.__course = Course.Course(materia, nrc, cr)
        
        #Getters
    @property 
    def grade(self):
        return self.__grade
    @property
    def Type(self):
        return self.__Type

    #Setters
    @grade.setter
    def grade(self, value):
        self.__grade = value
    @Type.setter
    def Type(self, value):
        self.__Type = value

#Prints
    def imprimir(self):
        Persona.Persona.imprimir(self)
        print("\nGRADO ACADEMICO: ", self.__grade, "\nTIPO DE DOCENTE: ", self.__Type)
        self.__course.imprimir()
     