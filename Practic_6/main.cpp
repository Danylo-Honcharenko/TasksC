#include <iostream>

using namespace std;
int main() {
    system("chcp 65001");

    int k(0);
    double x;
    cout << "Программа посчитает количество нулей среди вводимых вами чисел (не больше 13 раз)" << endl << endl;
    for(int i = 1; i <= 13; i++) {
        cout << "Введите " << i << " - е число";
        cin >> x;

        if (x == 0) {
            k++;
        }
    }

    if(k > 0) {
        cout << "Вы ввели " << k << " нулей";
    } else {
        cout << "Вы не ввели не одного нуля";
    }

    return 0;
}
