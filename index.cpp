#include <iostream>
#include <cmath>

using namespace std;

double potega(double x, double n, bool &error)
{
    if (x == 0 && n == 0)
    {
        error = true;
        return 0; 
    }
    if (x == 0 && n < 0)
    {
        error = true;
        return 0; 
    }
    if (n == 0)
    {
        error = false;
        return 1; 
    }

    error = false;
    return pow(x, n);
}

int main()
{
    double x, n;
    bool error;

    cout << "Podaj podstawę (x): ";
    cin >> x;
    cout << "Podaj wykładnik (n): ";
    cin >> n;

    double wynik = potega(x, n, error);

    if (error)
    {
        cout << "Podano nieprawidłowe dane." << endl;
    }
    else
    {
        cout << x << " do potęgi " << n << " wynosi " << wynik << endl;
    }
    return 0;
}
