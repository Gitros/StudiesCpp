#include <iostream>
#include <cmath>

using namespace std;

bool jestKwadratem(int liczba)
{
    if (liczba < 0)
    {
        return false;
    }

    int pierwiastek = static_cast<int>(sqrt(liczba));
    return (pierwiastek * pierwiastek == liczba);
}

int main()
{
    int liczba;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    if (jestKwadratem(liczba))
    {
        cout << "Liczba " << liczba << " jest kwadratem pewnej liczby całkowitej." << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " nie jest kwadratem żadnej liczby całkowitej." << endl;
    }

    return 0;
}
