#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Apr 15 16:19:46 2021

@author: jhonatanalexis
"""

class TanqueLlenoException(Exception):
    def __init__(self, msg="Tanque lleno"):
        self.__msg = msg
        super()
        
    def toString(self):
        return str(self.__msg)