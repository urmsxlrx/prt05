#include <iostream>
#include "Rectangle.h"


using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    double calculateSide(double angle) {
        return sqrt(pow(length, 2) + pow(width, 2) - 2 * length * width * cos(angle));
    }

    double calculateAngle() {
        return acos((pow(length, 2) + pow(width, 2)) / (2 * length * width));
    }
};

int main() {
    setlocale(LC_ALL, "Rus");
    Rectangle rect(0, 0);
    bool flag = false;
    unsigned int amount = 0;

    do {
        cout << "Выберите действие: " << endl;
        cout << "0. Выйти из программы" << endl;
        cout << "1. Посчитать площадь" << endl;
        cout << "2. Посчитать периметр" << endl;
        cout << "3. Посчитать сторону" << endl;
        cout << "4. Посчитать угол" << endl;
        cin >> amount;

        switch (amount) {
            case 0:
                cout << "Работа программы успешно завершена" << endl;
                flag = true;
                break;

            case 1: {
                double l, w;
                cout << "Введите длину: " << endl;
                cin >> l;
                cout << "Введите ширину: " << endl;
                cin >> w;
                rect = Rectangle(l, w);
                cout << "Площадь равна: " << rect.calculateArea() << endl;
                break;
            }

            case 2: {
                double l, w;
                cout << "Введите длину: " << endl;
                cin >> l;
                cout << "Введите ширину: " << endl;
                cin >> w;
                rect = Rectangle(l, w);
                cout << "Периметр равен: " << rect.calculatePerimeter() << endl;
                break;
            }

            case 3: {
                double l, w, angle;
                cout << "Введите длину: " << endl;
                cin >> l;
                cout << "Введите ширину: " << endl;
                cin >> w;
                cout << "Введите угол (в радианах): " << endl;
                cin >> angle;
                rect = Rectangle(l, w);
                cout << "Сторона равна: " << rect.calculateSide(angle) << endl;
                break;
            }

            case 4: {
                double l, w;
                cout << "Введите длину: " << endl;
                cin >> l;
                cout << "Введите ширину: " << endl;
                cin >> w;
                rect = Rectangle(l, w);
                cout << "Угол равен: " << rect.calculateAngle() << " радиан" << endl;
                break;
            }
        }
    } while (!flag);

    return 0;
}

