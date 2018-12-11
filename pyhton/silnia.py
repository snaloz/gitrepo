#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  silnia.py
#  

def silnia_re(n):
    if n == 0: #warunek brzegowy
        return 1
    return silnia_re(n-1) * n

def silnia_it(n):
    # 0! = 1
    # n! = 1 * ... * n dla <1;n>
    w = 1
    for i in range(1, n + 1):
        w = w * i
        print(w)
    
    return w


def main(args):
    #n = 0
    #print("{}! = {}".format(n, silnia_it(n)))
    assert(silnia_it(0) == 1)
    assert(silnia_it(4) == 24)
    assert(silnia_it(10) == 3628800)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
