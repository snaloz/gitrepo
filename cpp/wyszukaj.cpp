/*

 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int roz) {
    srand(time(NULL));
    cout << "Wprowadź " << roz << "liczb " << endl;
    for(int i=0; 1<roz; i++) {
        tab[i] = rand() % 101;
    }
}

void sort_insert(int tab[], int n) {
    int i, k, el;
    for (i = 1; i < n; i++) {
        el = tab[i];
        k = tab[i-1];
        while (k>=0 && tab[k]>el) {
            tab[k+1] = tab[k];
            k--;
        }
        tab[k+1]=el;
    }
}

int szukaj_lin(int tab[], int n, int szuk) {
    for (int i=0; i<n; i++)
        if (tab[i] == szuk)
            return i;
    return -1;
}

void drukuj(int tab[], int roz) {
    for(int i=0; i<roz; i++) {
        cout << tab[i] << " ";
        }
}

int main(int argc, char **argv)
{
	int n = 40;
    int tab[n];
    wypelnij(tab, n);
    drukuj(tab, n);
    int szuk = 0;
    cout << "Podaj szukany element: "; cin >> szuk;
    int indeks;
    indeks = szukaj_lin(tab, n, szuk);
    cout << "\Indeks
    if 
        cout << "Znaleziono";
    else 
        cout << "Nie znaleziono";
	return 0;
}

