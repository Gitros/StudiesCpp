#include <iostream>
using namespace std;

int silnia(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * silnia(n - 1);
    }
}

int main()
{
    int n;
    cout << "Podaj liczbę naturalną mniejszą od 13: ";
    cin >> n;

    if (n >= 13)
    {
        cout << "Podana liczba jest większa lub równa 13. Program może obliczyć silnię tylko dla n mniejszego 13." << endl;
    }
    else
    {
        int wynik = silnia(n);
        cout << "Wynik: " << wynik << endl;
    }

    return 0;
}
