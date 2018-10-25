#include <iostream>

using namespace std;
int nwd_klasyczna(int a, int b) {
    int licznik = 0;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        licznik++;
    }
    cout << "Powtórzeń: " << licznik << endl;
    return a;
}


int nwd_optymalny(int a, int b) {
    int licznik = 0;
    while (a > 0) {
            a = a % b;
            b = b - a;
    }
    cout << "Powtórzeń: " << licznik << endl;
    return b;
}


int main()
{
    cout << "Dzień dobry!" << endl;
    int a, b;
    a = b =0;
    cout << "Podaj 1. liczbę: ";
    cin >> a;
    cout << "Podaj 2. liczbę: ";
    cin >> b;
    cout << "NWD(" << a << " , " << b << ") = "
         << nwd_klasyczna(a, b) << endl;
    cout << "NWD(" << a << " , " << b << ") = "
         << nwd_optymalny(a, b) << endl;
    return 0;
}
