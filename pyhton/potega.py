#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
#  

def potega_it(a, n):
    w = 1
    for i in range(n):
        w = w * a
        print(w)
    
    return w


def main(args):
    a, n = 3, 4
    print(" Potęga {} do {} wynosi".format(a, n, potega_it(a, n)))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
