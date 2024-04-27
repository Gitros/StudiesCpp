#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, x1, x2;
    cout << "Program oblicza pierwiastki równania kwadratowego" << endl;
    cout << "Podaj a" << endl;
    cin >> a;
    if (a == 0)
    {
        cout << "niedozwolona wartość" << endl;
    }
    else
    {
        cout << "Podaj b" << endl;
        cin >> b;
        cout << "Podaj c" << endl;
        cin >> c;

        double delta = b * b - 4 * a * c;

        switch (signbit(delta))
        {
        case 0:
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Pierwiastek równania x1 = " << fixed << setprecision(2) << x1 << " x2 = " << fixed << setprecision(2) << x2 << endl;
            break;

        case 1:
            x1 = -b / (2 * a);
            cout << "trójmian ma pierwiastek podwójny x1 = " << x1 << "." << endl;
            break;

        default:
            cout << "brak pierwiastków rzeczywistych" << endl;
            break;
        }
    }
    return 0;
}