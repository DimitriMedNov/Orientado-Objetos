# -*- coding: utf-8 -*-
"""
Created on Sun Feb 21 12:37:21 2021

@author: Medina Novelo Jesus
"""
class Book:
    def __init__(self, title, autor, editoral, numpags, edicion, isbn, status):
       self.__title = "*Sin informacion previa*"
       self.__autor = "*Sin informacion previa*"
       self.__editoral = "*Sin informacion previa*"
       self.__numpags = 0
       self.__edicion = 0
       self.__isbn = 0
       self.__status = "*Sin informacion previa*"
    
    @property
    def title(self):
        return self.__title
    
    @property
    def autor(self):
        return self.__autor
    
    @property
    def editoral(self):
        return self.__editoral
    
    @property
    def numpags(self):
        return self.__numpags
    
    @property
    def edicion(self):
        return self.__edicion
    
    @property
    def isbn(self):
        return self.__isbn
    
    @property
    def status(self):
        return self.__status
    
    @title.setter
    def title(self, t):
        self.__title = 'string'
    
    @autor.setter
    def autor(self, a):
        self.__autor = 'string'
        
    @editoral.setter
    def editoral(self, e):
        self.__editoral = 'string'
        
    @numpags.setter
    def numpags(self, n):
        self.__numpags = int
        
    @edicion.setter
    def edicion(self, d):
        self.__edicion = int
        
    @isbn.setter
    def isbn(self, i):
        self.__isbn = int
        
    @status.setter
    def status(self, e):
        self.__status = 'string'
        
    def toString(self):
        numpags str = toString(self.__numpags)
        edicion str = toString(self.__edicion)
        isbn str = toString(self.__isbn)
        
    string str = print("Titulo: " + self.__title +"\n" + "Autor: " + self.__autor +"\n"+ "Editorial: " + self.__editorial +"\n"+"Numero de paginas: "+ self.__numpages +"\n"+ "Edicion: " + self.__edicion +"\n"+ "ISBN: " + self.__isbn+"\n"+"Status" + self.__status)
    return str: