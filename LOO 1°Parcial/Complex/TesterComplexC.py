# -*- coding: utf-8 -*-
"""
Created on Fri Feb 19 13:26:56 2021

@author: Medina Novelo Jesus
"""

import Complex as C

A = C.Complex()
B = C.Complex(-3.0, 5.49)
C = C.Complex(7.24, -9.1)
print("Numero n1: " , A.toString())
print("Numero n2: " , B.toString())
print("Numero n3: " , C.toString())
A = B.conjugate()
print("Numero n1: " , A.toString())
print("Modulo de n2: " , B.module())
print("Modulo de n3: " , C.module())
A.add(B, C)
print("SUMA: (" , B.toString() , ") , (" , C.toString() , ") = " , A.toString())
A.subs(B, C)
print("RESTA: (" , B.toString() , ") - (" , C.toString() , ") = " , A.toString())
A.mult(B, C)
print("MULTIPLICACION: (" , B.toString() , ") * (" , C.toString() , ") = " , A.toString() )
A.divi(B, C)
print("DIVISION: (" , B.toString() , ") / (" , C.toString() , ") = " , A.toString())