# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 12:52:44 2021

@author: MedNo
"""

import Clase_Persona_PY as P
import Clase_Empleado_PY as E

p1 = P.Persona("Juan", "Pérez", 21)
e1 = E.Empleado("Pedro", "Gutierrez", 25, "Jefe de departamento", 30000)
print("*********** PERSONA ***************")
p1.imprimir()
print("\n*********** EMPLEADO ***************")
e1.imprimir()