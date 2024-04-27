#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    int random = rand() % 10;
    int number;

    cout << "Zgadywanie liczby";
    cout << endl
         << "Podaj liczbe od 0 do 9: ";

    cin >> number;

    if (random == number)
    {
        cout << endl
             << "Zgadłeś!";
    }
    else
    {
        cout << endl
             << "Nie zgadłeś";
    }
}