#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Apr 15 17:59:24 2021

@author: jhonatanalexis
"""

class TanqueVacioException(Exception):
    def __init__(self, msg="Tanque vacío"):
        self.__msg = msg
        super()
        
    def toString(self):
        return str(self.__msg)