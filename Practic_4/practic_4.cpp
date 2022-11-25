#include "iostream"//;

using namespace std;
int main() {
    system("chcp 65001");
    int p;
    double f, a, x, c, b;

    cout << "   Главное меню программы   " << endl;
    cout << " 1: Вычисление функции F=-a*x-c " << endl;
    cout << " 2: Вычисление функции F=x-a/(-c) " << endl;
    cout << " 3: Вычисление функции F=b*x/(c-a) " << endl << endl;

    cout << "   Выберите пунк меню   ";
    cin >> p;

    switch (p) {
        case 1: {
            cout << "Введите значение a:";
            cin >> a;
            cout << "Введите значение x:";
            cin >> x;
            cout << "Введите значение c:";
            cin >> c;

            f = - a * x - c;
            cout << "F = " << f;
            break;
        }
        case 2: {
            cout << "Введите значение x:";
            cin >> x;
            cout << "Введите значение a:";
            cin >> a;
            cout << "Введите значение c:";
            cin >> c;

            if(-c!=0) {
                f = (x - a) / (-c);
                cout << "F = " << f;
            } else {
                cout << "Функция неопределена";
            }
            break;
        }
        case 3: {
            cout << "Введите значение b:";
            cin >> b;
            cout << "Введите значение x:";
            cin >> x;
            cout << "Введите значение c:";
            cin >> c;
            cout << "Введите значение a:";
            cin >> a;

            if(c-a!=0) {
                f = b * x / (c - a);
                cout << "F = " << f;
            } else {
                cout << "Функция неопределена";
            }
            break;
        }
        default: {
            cout << "   Неправильно выбран пункт меню   ";
        }
    }
    return 0;
}
