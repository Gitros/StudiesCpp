#include <iostream>
#include <cmath>

using namespace std;

int ileCyfr(int liczba)
{
    if (liczba == 0)
    {
        return 1;
    }

    return log10(abs(liczba)) + 1;
}

int main()
{
    int liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;

    int liczbaCyfr = ileCyfr(liczba);

    cout << "Liczba " << liczba << " jest " << liczbaCyfr << "-cyfrowa." << endl;

    return 0;
}
