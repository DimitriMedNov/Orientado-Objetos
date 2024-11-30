import Conica as Co
import Point2D as Point
import NotValidRadiusException as NVRE
import math as m

class MyCircle:
    numCirculos = 0
    PI = 3.141592
    def __init__(self, x=0, y=0, r=1):
        self.__center = Point.Point2D(x, y)
        try:
            self.radius = radio
        except NVRE.NotValidRadiusException:
            print("valor de radio no valido")
            print("Se asigna radio unitario")
            self.__radius = 1
        MyCircle.numCirculos = MyCircle.numCirculos + 1
    @property
    def radius(self):
        return self.__radius

    @radius.setter
    def radius(self, value):
        if value <= 0:
            raise NVRE.NotValidRadiusException()
        self.__radius = value

    """def estaSobre(self):
        #pendiente"""

    def mover(self):
        self.__center = obj

    def ecuacionConica (self):
        print ("Ecuación Conica")
        print ("(x - " + centro.X + ")^2" + "(y - " + centro.Y + ")^2" + " = " + self.__radio + "^2")

    #def toString(self):

