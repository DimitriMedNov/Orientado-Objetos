# -*- coding: utf-8 -*-
"""
Created on Mon Mar 15 23:14:37 2021

@author: MedNo
"""

#import CaracteristicasP as C
import BookP as B
import MagazineP as M

print("*********** Book ***************")
b1 = B.Book("Chems Ronaldo", "Alfaguara","Aprende a programar", 86064, 2009)
b1.showDetails()

print("*********** Magazine ***************")
m1 = M.Magazine("Aprende a programar", 86064, 2009,165)
m1.showDetails()