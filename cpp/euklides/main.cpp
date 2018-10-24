#include <iostream>

using namespace std;
int nwd_klasyczna(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
            else
            b = b - a;
        }
    return a;
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
    return 0;
}
