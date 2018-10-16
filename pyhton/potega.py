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
    #a, n = 3, 4
    #print(" Potęga {} do {} wynosi".format(a, n, potega_it(a, n)))
    assert(potega_it(0, 2) == 0)
    assert(potega_it(1, 1) == 1)
    assert(potega_it(2, 2) == 4)
    assert(potega_it(3, 3) == 27)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
