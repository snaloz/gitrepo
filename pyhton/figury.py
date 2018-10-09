#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py
#  

def prostokat1(a, b, znak):
    for i in range(a):
        for j in range(b):
            print(znak, end='')
        print()

        
def prostokat2(a, b, znak):
    for i in range(a):
        for j in range(b):
            if j == 0 or j == b - 1 or i == 0 or i == a - 1:
                print(znak, end='')
            else:
                print(" ", end='')   
        print() 


def choinka(h, znak):
    for i in range(h + 1):
        for j in range:
            if j == 0 or j == h - 1 :
                print(znak, end='')
            print()
    
    
def choinka2(h, znak):
    for i in range(h):
        for j in range(h - 1):
            if j == 0 or j == h - 1 :
                print(znak, end='')
            print()


def main(args):
    a = int(input("Podaj 1 bok prostokąta: "))
    b = int(input("Podaj 2 bok prostokąta: "))
    znak = input("Podaj znak: ")
    h = int(input("podaj wysokość choinki"))
    prostokat1(a, b, znak)
    print()
    prostokat2(a, b, znak)  
    print()
    choinka(h, znak)
    print()
    choinka2(h, znak)
    
    
    
        
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
