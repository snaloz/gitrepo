#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-cw1.py
#  
#  


def main(args):
    s = 0
    

    while s <= 75:
        l = int(input("Podaj liczbę: "))
        s = s + l
        
    
    while s > 75:  
        print("Suma: ", s) 
        exit(0)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
