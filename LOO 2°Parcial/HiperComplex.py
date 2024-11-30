
from abc import ABC, abstractmethod

class HiperComplex(ABC):

    @abstractmethod
    def conjugate(self):
        pass

    @abstractmethod
    def module(self):
        pass

    @abstractmethod
    def toString(self):
        pass

    @abstractmethod
    def print(self):
        pass


