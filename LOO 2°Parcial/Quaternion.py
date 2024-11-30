import HiperComplex as HiperC
import math as m

class Quaternion:
 def __init__(self, r=0, i=0, j=0, k=0):
     self.__real = r
     self.__imagI = i
     self.__imagJ = j
     self.__imagK = k

 def add(self,q1, q2):
     self.__real = q1.getReal + q2.getReal
     self.__imagI = q1.getImagI + q2.getImagI
     self.__imagJ = q1.getImagJ + q2.getImagJ
     self.__imagK = q1.getImagK + q2.getImagK

 def subs(self,q1, q2):
     self.__real = q1.getReal - q2.getReal
     self.__imagI = q1.getImagI - q2.getImagI
     self.__imagJ = q1.getImagJ - q2.getImagJ
     self.__imagK = q1.getImagK - q2.getImagK

 def mult(self,q1, q2):
     self.__real = q1.getReal * q2.getReal - q1.getImagI * q2.getImagI - q1.getImagJ * q2.getImagJ - q1.getImagK * q2.getImagK
     self.__imagI = q1.getReal * q2.getImagI + q1.getImagI * q2.getReal + q1.getImagJ * q2.getImagK - q1.getImagK * q2.getImagJ
     self.__imagJ = q1.getReal * q2.getImagJ - q1.getImagI * q2.getImagK + q1.getImagJ * q1.getReal + q1.getImagK * q2.getImagI
     self.__imagK = q1.getReal * q2.getImagK + q1.getImagI * q2.getImagJ - q1.getImagJ * q2.getImagI + q1.getImagK * q2.getReal

 #def div(self,q1,q2):
 #Por terminar

 @property
 def ImagI(self):
     return self.__imagI

 @property
 def ImagJ(self):
     return self.__imagJ

 @property
 def ImagK(self):
     return self.__imagK

 @property
 def Real(self):
     return self.__real

 @imagI.setter
 def imagI(self, i):
     self.__imagI = i

 @imagJ.setter
 def imagJ(self, j):
     self.__imagJ = j

 @imagK.setter
 def imagK(self, k):
     self.__imagK = k

 @real.setter
 def real(self, r):
     self.__real = r

 def module(self):
     return m.sqrt(self.__real * self.__real + self.__imagI * self.__imagI + self.__imagJ * self.__imagJ + self.__imagK * self.__imagK)

 def conjugate(self):
     self.__imagI *= -1
     self.__imagJ *= -1
     self.__imagK *= -1

 def toString(self):
     string = str(self.__real)
     if (self.__imag >= 0):
         string += "+"
     string += str(self.__imagI) + " i"
     if (self.__imagI >= 0):
         string += "+"
     string += str(self.__imagJ) + " j"
     if (self.__imagJ >= 0):
         string += "+"
     string += str(self.__imagK) + " k"
     return string

 def Print(self): #No estoy seguro de que esté bien
     stringg = str(self.__real)
     if (self.__imag >= 0):
         stringg += "+"
     stringg += str(self.__imagI) + " i"
     if (self.__imagI >= 0):
         stringg += "+"
     stringg += str(self.__imagJ) + " j"
     if (self.__imagJ >= 0):
         stringg += "+"
     stringg += str(self.__imagK) + " k"
     print (stringg)






