from abc import ABC, abstractmethod

class Conica(ABC):

    @abstractmethod
    def estaSobre(self):
        pass

    @abstractmethod
    def mover(self):
        pass

    @abstractmethod
    def ecuacionConica(self):
        pass

    @abstractmethod
    def toString(self):
        pass