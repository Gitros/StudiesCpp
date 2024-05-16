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

bool jestKwadratem(int liczba)
{
    if (liczba < 0)
    {
        return false;
    }
    int pierwiastek = sqrt(liczba);
    return (pierwiastek * pierwiastek == liczba);
}

bool jestSzesciem(int liczba)
{
    if (liczba < 0)
    {
        return false;
    }
    int pierwiastek = cbrt(liczba);
    return (pierwiastek * pierwiastek * pierwiastek == liczba);
}

int main()
{
    int liczba;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    int liczbaCyfr = ileCyfr(liczba);
    cout << "Liczba " << liczba << " jest " << liczbaCyfr << "-cyfrowa." << endl;

    if (pierwsza(liczba))
    {
        cout << "Liczba " << liczba << " jest liczbą pierwszą." << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie jest liczbą pierwszą." << endl;
    }

    if (jestKwadratem(liczba))
    {
        cout << "Liczba " << liczba << " jest kwadratem pewnej liczby całkowitej." << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie jest kwadratem żadnej liczby całkowitej." << endl;
    }

    if (jestSzesciem(liczba))
    {
        cout << "Liczba " << liczba << " jest sześcianem pewnej liczby całkowitej." << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie jest sześcianem żadnej liczby całkowitej." << endl;
    }

    return 0;
}
