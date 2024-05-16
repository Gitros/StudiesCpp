#include <iostream>

using namespace std;

void zamiana(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Podaj wartość zmiennej x: ";
    cin >> x;
    cout << "Podaj wartość zmiennej y: ";
    cin >> y;
    int* p = new int;
    int* q = new int;
    cout << "Podaj wartość zmiennej dynamicznej p: ";
    cin >> *p;
    cout << "Podaj wartość zmiennej dynamicznej q: ";
    cin >> *q;
    cout << "Przed zamianą:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;
    zamiana(x, y);
    zamiana(*p, *q);
    cout << "Po zamianie:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;

    delete p;
    delete q;

    return 0;
}
