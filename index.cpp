#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // promień
    double r;

    cout << "Podaj promień kuli: ";
    cin >> r;

    double volume = (4.0 / 3.0) * M_PI * pow(r, 3);

    cout << "Objetosc kuli o promienu " << r << " wynosi: " << fixed << setprecision(2) << volume << endl;

    return 0;
}