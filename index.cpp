#include <iostream>
using namespace std;

int silnia(int n)
{
    static int licznik = 0;
    licznik++;
    cout << "Wywołuje silnię po raz " << licznik << endl;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * silnia(n - 1);
    }
}

int symbolNewtona(int n, int k)
{
    return silnia(n) / (silnia(k) * silnia(n - k));
}

int main()
{
    int t;
    cout << "Podaj liczbę testów: ";
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cout << "Test " << i + 1 << ":" << endl;
        cout << "Podaj dwie liczby naturalne n i k (k < n, 0 < k, n <= 12): ";
        cin >> n >> k;

        if (k >= n || k <= 0 || n > 12)
        {
            cout << "Błędne dane wejściowe. Upewnij się, że k < n oraz 0 < k, n <= 12." << endl;
        }
        else
        {
            int wynik = symbolNewtona(n, k);
            cout << wynik << endl;
        }
    }

    return 0;
}