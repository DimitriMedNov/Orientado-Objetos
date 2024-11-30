#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Apr 14 14:35:49 2021

@author: jhonatanalexis
"""
import TanqueLlenoException as ExceptionFull
import TanqueVacioException as ExceptionEmpty

class Tanque:
    def __init__(self, capacidad=100, cargaActual = 0, tipoLiquido="Agua"):
        if capacidad > 0:
            self.__capacidad = capacidad
        else:
            self.__capacidad = 1
        if cargaActual >= 0:
            self.__cargaActual = cargaActual
        else:
            self.__cargaActual = 0
        self.__tipoLiquido = tipoLiquido
        
    def agregarCarga(self, carga):
        self.__cargaActual = self.__cargaActual + carga
        try:
            if self.__cargaActual >= self.__capacidad:
                self.__cargaActual = self.__capacidad
                raise ExceptionFull.TanqueLlenoException
        except ExceptionFull.TanqueLlenoException:
            print("TANQUE LLENO. SE ALCANZÓ LA CAPACIDAD MÁXIMA")
        finally:
            print("Carga actual: ", self.__cargaActual, " L")
        
    def retirarCarga(self, carga):
        self.__cargaActual = self.__cargaActual - carga
        try:
            if self.__cargaActual <= 0:
                self.__cargaActual = 0
                raise ExceptionEmpty.TanqueVacioException
        except ExceptionEmpty.TanqueVacioException:
            print("TANQUE VACÍO. SE ALCANZÓ LA CAPACIDAD MINIMA")
        finally:
            print("Carga actual: ", self.__cargaActual, " L")
        
    @property
    def cargaActual(self):
        return self.__cargaActual
    
    @property
    def tipoLiquido(self):
        return self.__tipoLiquido
    
    @property
    def capacidad(self):
        return self.__capacidad
    
#no son necesario los setters porque no tiene sentido que una vez creado el objeto se cambie su capacidad, carga, etc        
