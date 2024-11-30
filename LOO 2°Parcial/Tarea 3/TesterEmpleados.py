# -*- coding: utf-8 -*-
"""
Created on Fri Mar 19 12:23:38 2021

@author: MedNo
"""

import Jefe as J
import TrabajadorComision as TC
import EmpleadoPiezas as EP

jefe1 = J.Jefe("Juan Perez", 40000)
trabajador1 = TC.TrabajadorComision("Felipe Rodriguez", 5000, 0.3, 10000)
empleado1 = EP.EmpleadoPiezas("Fulano de Tal", 8000, 50)

#mostramos que funciona con cada objeto
print("************* PROBANDO CON OBJETOS *************")
jefe1.imprimir()
trabajador1.imprimir()
empleado1.imprimir()
#Ahora checamos comportamiento polimórfico
print("\n\n************* PROBANDO POLIMORFISMO *************")
empleado = jefe1
empleado.imprimir()
empleado = trabajador1
empleado.imprimir()
empleado = empleado1
empleado.imprimir()