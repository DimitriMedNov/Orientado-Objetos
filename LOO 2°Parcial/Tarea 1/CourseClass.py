# -*- coding: utf-8 -*-
"""
Created on Wed Mar 10 22:44:37 2021

@author: MedNo
"""

class Course:
    def __init__(self,materia, nrc, cr):
        self.__materia = materia
        self.__nrc = nrc
        if(cr<0):
            self.__cr = 0
        else:
            self.__cr = cr

    #Getters
    @property
    def materia(self):
        return self.__materia
    @property
    def nrc(self):
        return self.__nrc
    @property
    def cr(self):
        return self.__cr

    #Setters
    @materia.setter
    def materia(self, materia):
        self.__materia = materia
    @nrc.setter
    def nrc(self, nrc):
        self.__nrc = nrc
    @cr.setter
    def cr(self, cr):
        self.__cr = cr

    #prints
    def imprimir(self):
        print("\nMateria: ", self.__materia, "\nNRC: ", self.__nrc, "\nCreditos: ", self.__cr)