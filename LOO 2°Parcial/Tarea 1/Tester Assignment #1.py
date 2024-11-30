# -*- coding: utf-8 -*-
"""
Created on Mon Mar  8 12:23:44 2021

@author: MedNo
"""
import PersonClass as P
import StudentClass as S
import TeacherClass as T
#import CourseClass as C


p1 = P.Persona("Leonel", "Messi", 33,24,6,1987)
print("*********** PERSON ***************")
p1.imprimir()

s1 = S.Student("Cristiano", "Ronaldo", 36, 5, 2, 1985,"Delantero de la Juve",8,10)
print("\n*********** STUDENT ***************")
s1.imprimir()

t1 = T.Teacher("Zinedine","Zidane",48,23,6,1972,"Doctorado","Tiempo Completo","Lenguaje Orientado a Objetos", "SIS1402", 6)
print("\n*********** TEACHER ***************")
t1.imprimir()

