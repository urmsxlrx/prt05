#include <iostream>
#include "Triangle.h"

using namespace std;








int main()
{
    setlocale(LC_ALL, "Rus");
    Triangle tri1(0, 0, 0, 0);
    bool flag = false;
    unsigned int amount = 0;
    do {
        cout << "Выберите действие: " << endl;
        cout << "0.Выйти из программы" << endl;
        cout << "1.Посчитать площадь: " << endl;
        cout << "2.Посчитать перемитр: " << endl;
        cout << "3.Посчитать сторону: " << endl;
        cout << "4.Посчитать угол: " << endl;
        cin >> amount;
        switch (amount)
        {
            case 0:
            {
                cout << "Работа программы успешно завершена" << endl;
                flag = true;
                break;
            }
            case 1:
            {
                double a = 0;
                double h = 0;
                cout << "Введите сторону 1: " << endl;
                cin >> a;
                cout << "Введите высоту: " << endl;
                cin >> h;
                cout << "Площадь равна: " << tri1.ploshad(a, h) << endl;
                break;
            }
            case 2:
            {
                double a, b, c;
                cout << "Введите сторону 1: " << endl;
                cin >> a;
                cout << "Введите сторону 2: " << endl;
                cin >> b;
                cout << "Введите сторону 3: " << endl;
                cin >> c;
                cout << "Периметр равен: " << tri1.perimetr(a, b, c) << endl;
                break;
            }
            case 3:
            {
                double a, b, c;
                cout << "Введите сторону 1: " << endl;
                cin >> a;
                cout << "Введите сторону 2: " << endl;
                cin >> b;
                cout << "3 сторона равна: " << tri1.storona(a, b) << endl;
                break;
            }
            case 4:
            {
                double a, b, c;
                cout << "Введите сторону 1: " << endl;
                cin >> a;
                cout << "Введите сторону 2: " << endl;
                cin >> b;
                cout << "Введите сторону 3: " << endl;
                cin >> c;
                cout << "Угол равен: " << tri1.ugol(a, b, c) << endl;
                break;
            }
        }
    } while (flag != true);


    return 0;
}


