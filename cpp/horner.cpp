/*
 * horner.cpp
 * 
 * Copyright 2018  <>
 */

#include <iostream>

using namespace std;

void drukujw(int stopien, float tbwsp[]) {
    int i = 0;
    for(i = 0; i <= stopien - 1; i++) {
        
        cout << tbwsp[i] << "x^" << stopien - i << " + "; 
    }
        cout << tbwsp[stopien];
}
 
 
 float horner_it(float x, int stopien, float tbwsp[]) {
        float wynik = tbwsp[0];
        for (int i = 1; i <= stopien; i++) {
            wynik = wynik * x + tbwsp[i];
            
    }
    return wynik;
}
    
    

int main(int argc, char **argv) {  
    float x = 0;
    float *tbwsp; // wskaźnik 
    int stopien = 0;
    cout << "Podaj stopień wielomianu ";
    cin >> stopien;
    tbwsp = new float[stopien + 1];  //~dynamiczna delarcaja tablicy 
    cout << tbwsp;
    for(int i=0; i <=stopien; i++){
        
        cout << "Podaj współczynniki przy potędze " << stopien-i << ": ";
        cin >> tbwsp[i];
    }
	
    cout << "Podaj argument: ";
    cin >> x;
    
    cout << "Wartośc wielomianu o postaci: ";
    drukujw(stopien ,tbwsp);
    cout << "Wynosi: " << horner_it(x, stopien, tbwsp) << endl;
    
    
    
	return 0;
}
