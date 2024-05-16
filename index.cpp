#include <iostream>
#include <cmath>

using namespace std;

bool jestSzescianem(int liczba)
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

    if (jestSzescianem(liczba))
    {
        cout << "Liczba " << liczba << " jest sześcianem pewnej liczby naturalnej." << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie jest sześcianem żadnej liczby naturalnej." << endl;
    }

    return 0;
}
