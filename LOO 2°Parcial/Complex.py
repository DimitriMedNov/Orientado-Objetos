
import HiperComplex as HiperC
import math as m

class Complex:
 def __init__(self, r=0, i=0):
  self.__real = r
  self.__imag = i

 @property
 def real(self):
  return self.__real

 @property
 def imag(self):
  return self.__imag

 @real.setter
 def real(self, r):
  self.__real = r

 @imag.setter
 def imag(self, i):
  self.__imag = i

 def module(self):
  return m.sqrt(self.__real*self.__real + self.__imag*self.__imag)

 def conjugate(self):
  return Complex(self.__real, - self.__imag)

 def add(self, n1, n2):
  self.__real = n1.real + n2.real
  self.__imag = n1.imag + n2.imag

 def subs(self, n1, n2):
  self.__real = n1.real - n2.real
  self.__imag = n1.imag - n2.imag

 def mult(self, n1, n2):
  self.__real = n1.real * n2.real - n1.imag * n2.imag
  self.__imag = n1.real * n2.imag + n1.imag * n2.real

 def divi(self, n1, n2):
  self.__real = (n1.real * n2.real + n1.imag * n2.imag) / (n2.real * n2.real + n2.imag * n2.imag)
  self.__imag = (-n1.real * n2.imag + n2.real * n1.imag) / (n2.real * n2.real + n2.imag * n2.imag)

 def toString(self):
     string = str(self.__real)
     if(self.__imag>=0):
        string += "+"
     string += str(self.__imag) + " i"
     return string