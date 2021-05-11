#include <iostream>
using namespace std;

int main()
{
     int l, liczba, x, odw = 0;

     cout << "podaj liczbe: ";
     cin >> liczba;

     l = liczba;

     do
     {
         x = liczba % 10;
         odw = (odw * 10) + x;
         liczba = liczba / 10;
     } while (liczba != 0);

     cout << "odwrotnoscia liczby " << l <<" jest: " << odw << endl;

     if (l == odw)
         cout << "liczba jest palindromem";
     else
         cout << "liczba nie jest palindromem.";

    return 0;
}
