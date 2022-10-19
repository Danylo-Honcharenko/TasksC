#include "iostream"//;
#include "cmath"//;

using namespace std;
int main() {
    system("chcp 65001");

    long double g, a, b, d;
    cout << "Введіть значення g:";
    cin >> g;
    cout << "Введіть значення a:";
    cin >> a;
    cout << "Введіть значення b:";
    cin >> b;

    if(g > 2) {
        if(pow(b, 3) >= 0) {
            d = a - sqrt(pow(b, 3));
            cout << "Значення d = " << d;
        } else {
            cout << "Функція d не визначена!";
        }
    } else {
        d = a + cbrt(b);
        cout << "Значення d = " << d;
    }

    return 0;
}
