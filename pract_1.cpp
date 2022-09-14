#include "iostream"//;
#include "cmath"//;

using namespace std;

int main() {
    float a, Z1, Z2;
    cout << "Введите величину угла альфа в радианах: ";
    cin >> a;
    Z1 = sin(2 * a) + sin(5 * a) - sin(3 * a)/cos(a) - cos(3 * a) + cos(5 * a);
    cout << "Значение Z1 равно " << Z1;
    return 0;
}

