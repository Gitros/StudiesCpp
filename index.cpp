#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbę naturalną: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Podana liczba musi być naturalna (większa od zera)." << endl;
        return 1;
    }

    cout << "Dzielniki liczby " << n << " to: ";
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
