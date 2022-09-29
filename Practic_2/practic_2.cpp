#include "iostream"//;
#include "cmath"//;

using namespace std;

int main () {
    system("chcp 65001");
    float x,y;
    cout << "Введите значение x ";
    cin >> x;
    if(x-7!=0 && x-3>=0) {
        y = 1/(x-7) + sqrt(x-3);
        cout << "Значение y = " << y;
    } else {
        cout << "Для введенного x = " << x <<  " функция не определена";
    }
    return 0;
}