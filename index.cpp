#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    int a, b;

    cout << "Wprowadz pierwszą liczbę całkowitą" << endl;
    cin >> a;

    cout << "Wprowadz drugą liczbę całkowitą" << endl;
    cin >> b;

    cout << "Dodawanie" << endl;
    cout << a + b << endl;
    cout << "Odejmowanie" << endl;
    cout << a - b << endl;
    cout << "Mnożenie" << endl;
    cout << a * b << endl;
    cout << "Dzielenie" << endl;
    if (b == 0)
    {
        cout << "Nie można dzielić przez zero" << endl;
        return 0;
    }
    else
    {
        cout << "Wynik Dzielenia" << end;
        cout << a / b << endl;
    }
    return 0;
}