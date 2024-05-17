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

int main()
{
    int num1, num2;
    cout << "Podaj dwie liczby naturalne: ";
    cin >> num1 >> num2;

    int nwd = NWD(num1, num2);

    cout << "Największy wspólny dzielnik: " << nwd << endl;

    return 0;
}
