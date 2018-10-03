#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma-cyfr.py
# 
#  

def sumuj_cyfry1(l):
    s = 0
    
    while l > 0:
       s = s + (l % 10)
       l = int(l / 10)
    return suma


def main(args):
    l = input("Podaj liczbę min. dwucyfrową: ")
    l = int(l)
    while l < 10:
        l = input("Podaj liczbę min. dwucyfrową: ")
        l = int(l)
    
    print("Suma: ", sumuj_cyfry1(l))
        
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
