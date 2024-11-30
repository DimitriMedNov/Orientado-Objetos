# -*- coding: utf-8 -*-
"""
Created on Sat Apr 10 14:51:00 2021

@author: usuario
"""

import Point2D as P
import Circle as C
import Cylinder as Cy

C1 = Cy.Cylinder(5,4,6,7)
            
print("Nombre de la figura: " + C1.shapename())
print("Area: " + str(C1.calcularea()))
print("Volumen: " + str(C1.calcularvolumen()))
print("");

B1 = C.Circle(2, 4, 5);
print("Nombre de la figura: " + B1.shapename())
print("Area: " + str(B1.calcularea()))
print("Perimetro: " + str(B1.calcularperimetro()))
print("")

P1 = P.Point2D(4, 5);
print("Nombre de la figura: " + P1.shapename());

