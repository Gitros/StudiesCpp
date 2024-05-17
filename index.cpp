#include <iostream>
using namespace std;

int NWD(int a, int b)
{
    while (b != 0)
    {
        int x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int NWW(int a, int b)
{
    int nwd = NWD(a, b);
    return (a * b) / nwd;
}

int main()
{
    int num1, num2;
    cout << "Podaj pierwszą liczbe naturanlą: ";
    cin >> num1;
    cout << "Podaj drugą liczbe naturanlą: ";
    cin >> num2;

    int nww = NWW(num1, num2);

    cout << "Najmniejsza wspólna wielokrotność: " << nww << endl;

    return 0;
}
