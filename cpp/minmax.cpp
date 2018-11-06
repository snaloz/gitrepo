/*
 * minmax.cpp
 */
 

#include <iostream>

using namespace std;

void wypelnij(int tab[], int roz) {
    cout << "Wprowadź " << roz << " liczb: " << endl;
    for(int i=0; i<roz; i++) {
        cin >> tab[i];
    }
}

void drukuj(int tab[], int roz) {
    for(int i=0; i<roz; i++) {
        cout << tab[i] << " ";
    }
}

void minmax(int tab[], int roz) {
    int min = tab[0];
    int max = tab[0];
    for(int i=1; i<roz; i++) {
        if (min > tab[i])
            min = tab[i];
        if (max < tab[i])
            max = tab[i];
    }
    cout << "Min.: " << min << endl;
    cout << "Mix.: " << max << endl;
}

int main(int argc, char **argv)
{
    const int rozmiar = 10;
	int tab[rozmiar];
    wypelnij (tab, rozmiar);
    drukuj(tab, rozmiar);
    cout << endl;
    minmax(tab, rozmiar);
	return 0;
}

