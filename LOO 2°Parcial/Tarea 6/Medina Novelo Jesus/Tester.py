#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Apr 14 15:11:19 2021

@author: jhonatanalexis
"""
import Tanque as T

A = T.Tanque(100, 0, "Agua")

print("Tipo de liquido que usa el tanque: ", A.tipoLiquido)
print("Capacidad del tanque: ", A.capacidad, " L")
print("Carga actual del tanque: ", A.cargaActual, " L")

while A.cargaActual < A.capacidad:
    carga = int(input("¿Cuanta carga quieres agregar?: "))
    A.agregarCarga(carga)
    
while A.cargaActual > 0:
    carga = int(input("¿Cuanta carga quieres retirar?: "))
    A.retirarCarga(carga)