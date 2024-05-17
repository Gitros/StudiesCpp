#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbę naturalną dodatnią: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba musi być dodatnia i większa od zera." << endl;
        return 1;
    }

    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }

    cout << "Suma liczb od 1 do " << n << " wynosi: " << suma << endl;

    return 0;
}
