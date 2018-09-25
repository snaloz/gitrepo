#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  abc.py
#  


def main(args):
    a = input("Podaj 1. liczbę")
    print(a)
    b = input("Podaj 2. liczbę")
    print(b)
    c = input("Podaj 3. liczbę")
    print (c)
    
    if a > b:
        if a > c:
            print("Maks: ", a)
        else:
            print("Maks: ", c)
            
            
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
