#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    float a, b, pole;

    cout << "Program oblicza pole prostokąta." << endl;
    cout << "Podaj bok a." << endl;
    cin >> a;

    cout << "Podaj bok b." << endl;
    cin >> b;

    pole = a * b;

    cout << fixed << setprecision(2); // ustalenie precyzji
    cout << "Pole prostokąta o boku a = " << a << " i boku b = " << b;
    cout << " wynosi " << pole << "." << endl;
    return 0;
}