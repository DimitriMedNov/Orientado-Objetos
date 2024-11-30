class Punto:
 def __init__(self, x=0, y=0):
     self.__x = x
     self.__y = y
 def trasladar(self, dx, dy):
     self.__x += dx
     self.__y += dy
 @property
 def x(self):
     return self.__x
 @x.setter
 def x(self, x):
     self.__x = x
 @property
 def y(self):
     return self.__y
 @y.setter
 def y(self, y):
     self.__y = y