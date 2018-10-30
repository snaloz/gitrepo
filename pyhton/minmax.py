#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  minmax.py
import random

def losuj(ile, lmin, lmax):
    lista = []
    for i in range(ile):
        lista.append(random.randint(lmin, lmax))
    print(lista)
    return lista


def minmax():
    ile = int(input('Ile podasz liczb? '))
    min = max = int(input('Podaj liczbę: '))
    for i in range(ile - 1):
        liczba = int(input('Podaj liczbę: '))
        if min > liczba:
            min = liczba
        if max < liczba:
            max = liczba
    return min, max
    
    
def minimum(liczby):
    min = liczby[0]
    for i in liczby:
        if min > i:
            min = i
    return min
        


def main(args):
   # min, max = minmax()
   # print('Najmniejsza: ', min)
   # print('Największa: ', max)
   liczby = losuj (20, 0, 50)
   print('Najmniejsza: ', minimum(liczby))
   return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
