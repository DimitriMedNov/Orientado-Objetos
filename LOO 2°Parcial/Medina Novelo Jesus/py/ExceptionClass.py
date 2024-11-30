class NotValidRadiusException(Exception):
 def __init__(self, msg="Valor negativo..."):
     self.__msg = "Valor invalido"
     super()

 def toString(self):
     return str(self.__msg)