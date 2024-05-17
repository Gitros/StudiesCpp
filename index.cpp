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

int symbolNewtona(int n, int k)
{
    return silnia(n) / (silnia(k) * silnia(n - k));
}

int main()
{
    int n, k;
    cout << "Podaj pierwszą liczbe naturalną: ";
    cin >> n;
    cout << "Podaj drugą liczbe naturalną: ";
    cin >> k;

    if (k >= n || k <= 0 || n > 12)
    {
        cout << "Błędne dane wejściowe. Upewnij się, że k < n oraz 0 < k, n <= 12." << endl;
    }
    else
    {
        int wynik = symbolNewtona(n, k);
        cout << "Wartość współczynnika dwumianowego: " << wynik << endl;
    }

    return 0;
}