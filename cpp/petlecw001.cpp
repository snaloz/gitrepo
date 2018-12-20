/*
 * petlecw001.cpp
 */


#include <iostream>
using namespace std;

void zad01() {
    int s = 0;
    for (int i = 10; i < 100; i++) {
        if (i % 2 == 0)
        s = s + i;
    }
    cout << "Suma: " << s << endl;
}

void zad02() {
    int s = 0;
    int a;
    while (a != s) {
        s = s + a;
        cout << "Wprowadź liczbę: ";
        cin >> a;
         
    }
    cout << "Suma: " << s << endl;
}

int main(int argc, char **argv)
{
	zad01();
    zad02();
	return 0;
}

