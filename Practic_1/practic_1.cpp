//
// Created by danil on 14.09.22.
//

#include "iostream"//;
#include "cmath"//;

using namespace std;

int main() {
    float a, Z1, Z2;
    cout << "Введите величину угла альфа в радианах: ";
    cin >> a;
    Z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a))/(cos(a) - cos(3 * a) + cos(5 * a));
    Z2 = tan(3 * a);
    cout << "Значение Z1 равно " << Z1 << endl;
    cout << "Значение Z2 равно " << Z2;
    return 0;
}