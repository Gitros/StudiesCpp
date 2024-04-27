#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Program sprawdza czy boki a, b i c tworzą trójkąt prostokątny." << endl;
    cout << "Podaj bok a." << endl;
    cin >> a;
    cout << "Podaj bok b." << endl;
    cin >> b;
    cout << "Podaj bok c." << endl;
    cin >> c;

    if ((a * a + b * b) == (c * c))
    {
        cout << "Boki a = " << a << ", b = " << b << " i c = " << c;
        cout << " tworzą trójkąt prostokątny." << endl;
    }
    else
    {
        cout << "Boki a = " << a << ", b = " << b << " i c = " << c;
        cout << " nie tworzą trójkąta prostokątnego." << endl;
    }

    return 0;
}