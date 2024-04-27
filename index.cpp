#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float x, y;

    cout << "Podaj liczbę x ";
    cin >> x;
    cout << "Podaj liczbę y ";
    cin >> y;

    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;
    float iloraz = x / y;

    cout << "Suma x i y " << fixed << setprecision(2) << suma << endl;
    cout << "Roznica x i y " << fixed << setprecision(2) << roznica << endl;
    cout << "Ilocyn x i y " << fixed << setprecision(2) << iloczyn << endl;
    cout << "Iloraz x i y " << fixed << setprecision(2) << iloraz << endl;

    return 0;
}