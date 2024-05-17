#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbę całkowitą: ";
    cin >> n;

    int suma = 0;
    if (n > 0)
    {
        for (int i = 1; i <= n; ++i)
        {
            suma += i;
        }
    }
    else if (n < 0)
    {
        for (int i = n; i <= 1; ++i)
        {
            suma += i;
        }
    }

    cout << "Suma liczb od 1 do " << n << " wynosi: " << suma << endl;

    return 0;
}
