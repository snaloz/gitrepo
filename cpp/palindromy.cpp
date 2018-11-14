/*
 * palindromy.cpp
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	const int rozmiar = 20;
    char wyraz[20];
    cout << "Podaj wyraz lub zdanie: ";
    cin.getline(wyraz, rozmiar);
    cout << cin.gcount() << endl;
    cout << strlen(wyraz) << endl;
    if (palindrom(wyraz, strlen(wyraz)))
        cout << "Palindrom!";
    
    return 0;
}


