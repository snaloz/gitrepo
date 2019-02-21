/*
 * szyfr_przestawieniowy.cpp
 */


#include <iostream>
#include <string.h>
using namespace std;

#define MAKS 100

void szyfruj(char tb[], int klucz) {
    int ile = strlen(tb);
    cout << ile << endl; 
    int reszta = 0;
    reszta = klucz % 26;
    cout << reszta;
}


int main(int argc, char **argv) 
{
    char tekst[MAKS];
    int klucz = 0;
    cout << "podaj tekst:\n"; 
    cin.getline(tekst, MAKS);
    cout << "podaj klucz:\n";
    cin >> klucz;
    szyfruj(tekst, klucz);
	return 0;
}

