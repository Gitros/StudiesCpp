#include <iostream>
#include <cmath>

using namespace std;

bool pierwsza(int liczba)
{
    if (liczba <= 1)
    {
        return false;
    }
    if (liczba == 2)
    {
        return true;
    }
    if (liczba % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(liczba); i += 2)
    {
        if (liczba % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;

    if (pierwsza(liczba))
    {
        cout << "Liczba " << liczba << " jest liczbą pierwszą." << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie jest liczbą pierwszą." << endl;
    }

    return 0;
}
