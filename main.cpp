#include <iostream>
#include "parallelogram.h"
#include "circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    bool flag = false;
    Parallelogram parallelogram1(0, 0, 0, 0, 0, 0);
    circle circle(0);
    Rectangle rectangle(0, 0);
    Triangle triangle(0, 0, 0, 0);
    trapezoid trapezoid(0, 0, 0, 0, 0, 0, 0, 0);
    size_t figure = 0;
    size_t amount = 0;
    do {

        cout << "Выберите фигуру, которую хотите рассчитать: " << endl;
        cout << "0.Выйти из программы" << endl;
        cout << "1.Параллелограмм" << endl;
        cout << "2.Круг" << endl;
        cout << "3.Прямоугольник" << endl;
        cout << "4.Треугольник" << endl;
        cout << "5.Трапеция" << endl;
        cin >> figure;
        switch (figure)
        {
            case 0:
            {
                cout << "Работа программы завершена" << endl;
                flag = true;
                break;
            }
            case 1:
            {
                cout << "Выберите действие которое хотите совершить: " << endl;
                cout << "1.Площадь" << endl;
                cout << "2.Периметр" << endl;
                cout << "3.Сторона" << endl;
                cout << "4.Угол" << endl;
                cin >> amount;
                switch (amount)
                {
                    case 0:
                    {
                        cout << "Работа программы завершена" << endl;
                        flag = true;
                        break;
                    }
                    break;
                    case 1:
                    {
                        double a = 0, h = 0;
                        cout << "Введите сторону: " << endl;
                        cin >> a;
                        cout << "Введите высоту: " << endl;
                        cin >> h;
                        cout << "Площадь равна: " << parallelogram1.area(a, h) << endl;
                        break;
                    }
                    break;
                    case 2:
                    {
                        double a = 0, b = 0, c = 0;
                        cout << "Введите сторону A: " << endl;
                        cin >> a;
                        cout << "Введите сторону B: " << endl;
                        cin >> b;
                        cout << "Введите сторону C: " << endl;
                        cin >> c;
                        cout << "Перемитр равен: " << parallelogram1.perimetr(a, b, c) << endl;
                        break;
                    }
                    break;
                    case 3:
                    {
                        double a = 0, D = 0, d = 0, ya = 0;
                        cout << "Введите сторону A: " << endl;
                        cin >> a;
                        cout << "Введите диагональ: " << endl;
                        cin >> D;
                        cout << "Введите диагональ: " << endl;
                        cin >> d;
                        cout << "Введите угол между сторонами: " << endl;
                        cin >> ya;
                        cout << "Сторона равна: " << parallelogram1.side(a, D, d, ya) << endl;
                        break;
                    }
                    break;
                    case 4:
                    {
                        double ya = 0;
                        cout << "Введите угол между сторонами: " << endl;
                        cin >> ya;
                        cout << "Угол параллелограмма равен: " << parallelogram1.corner(ya) << endl;
                        break;
                    }
                    break;
                    default: cout << "Неверно выбранная операция" << endl;
                }
                break;
                case 2:
                {
                    cout << "Выберите действие которое хотите совершить: " << endl;
                    cout << "1.Площадь" << endl;
                    cout << "2.Периметр" << endl;
                    cout << "3.Сторона" << endl;
                    cout << "4.Угол" << endl;
                    cin >> amount;
                    switch (amount)
                    {
                        case 0:
                        {
                            cout << "Работа программы завершена" << endl;
                            flag = true;
                            break;
                        }
                        break;
                        case 1:
                        {
                            double r = 0;
                            cout << "Введите радиус: " << endl;
                            cin >> r;
                            cout << "Площадь равна: " << circle.area(r) << endl;
                            break;
                        }
                        break;
                        case 2:
                        {
                            double r = 0;
                            cout << "Введите радиус: " << endl;
                            cin >> r;
                            cout << "Периметр равен: " << circle.perimetr(r) << endl;
                            break;
                        }
                        break;
                        default: cout << "Неверно выбранная операция" << endl;
                    }
                    break;
                    case 3:
                    {
                        cout << "Выберите действие которое хотите совершить: " << endl;
                        cout << "1.Площадь" << endl;
                        cout << "2.Периметр" << endl;
                        cout << "3.Сторона" << endl;
                        cout << "4.Угол" << endl;
                        cin >> amount;
                        switch (amount)
                        {
                            case 0:
                            {
                                cout << "Работа программы завершена" << endl;
                                flag = true;
                                break;
                            }
                            break;
                            case 1:
                            {
                                double lenght = 1, width = 1;
                                cout << "Введите длину: " << endl;
                                cin >> lenght;
                                cout << "Введите ширину: " << endl;
                                cin >> width;
                                cout << "Площадь равна: " << rectangle.area(lenght, width) << endl;
                                break;
                            }
                            break;
                            case 2:
                            {
                                double lenght = 0, width = 0;
                                cout << "Введите длину: " << endl;
                                cin >> lenght;
                                cout << "Введите ширину: " << endl;
                                cin >> width;
                                cout << "Периметр равен: " << rectangle.perimeter(lenght, width) << endl;
                                break;
                            }
                            break;
                            case 3:
                            {
                                double lenght = 0, width = 0;
                                cout << "Введите длину: " << endl;
                                cin >> lenght;
                                cout << "Введите ширину: " << endl;
                                cin >> width;
                                cout << "Диагональ равна: " << rectangle.diagonal(lenght, width) << endl;
                                break;
                            }
                            case 4:
                            {

                            }
                            break;
                        }
                        break;
                    }
                    case 4:
                    {
                        cout << "Выберите действие которое хотите совершить: " << endl;
                        cout << "1.Площадь" << endl;
                        cout << "2.Периметр" << endl;
                        cout << "3.Сторона" << endl;
                        cout << "4.Угол" << endl;
                        cin >> amount;
                        switch (amount)
                        {
                            case 0:
                            {
                                cout << "Работа программы завершена" << endl;
                                flag = true;
                                break;
                            }
                            break;
                            case 1:
                            {
                                double a = 0, h = 0;
                                cout << "Введите сторону: " << endl;
                                cin >> a;
                                cout << "Введите высоту: " << endl;
                                cin >> h;
                                cout << "Площадь равна: " << triangle.area(a, h) << endl;
                                break;
                            }
                            break;
                            case 2:
                            {
                                double a = 0, b = 0, c = 0;
                                cout << "Введите сторону A: " << endl;
                                cin >> a;
                                cout << "Введите сторону B: " << endl;
                                cin >> b;
                                cout << "Введите сторону C: " << endl;
                                cin >> c;
                                cout << "Перемитр равен: " << triangle.perimetr(a, b, c) << endl;
                                break;
                            }
                            break;
                            case 3:
                            {
                                double a = 0, b = 0;
                                cout << "Введите сторону A: " << endl;
                                cin >> a;
                                cout << "Введите сторону B: " << endl;
                                cin >> b;
                                cout << "Сторона равна: " << triangle.side(a, b) << endl;
                                break;
                            }
                            break;
                            case 4:
                            {
                                double a = 0, b = 0, c = 0;
                                cout << "Введите сторону A: " << endl;
                                cin >> a;
                                cout << "Введите сторону B: " << endl;
                                cin >> b;
                                cout << "Введите сторону C: " << endl;
                                cin >> c;
                                cout << "Угол равен:  " << triangle.corner(a, b, c) << endl;
                                break;
                            }
                            break;
                            default: cout << "Неверно выбранная операция" << endl;
                        }
                        break;
                    }
                    case 5:
                    {
                        cout << "Выберите действие которое хотите совершить: " << endl;
                        cout << "1.Площадь" << endl;
                        cout << "2.Периметр" << endl;
                        cout << "3.Сторона" << endl;
                        cout << "4.Угол" << endl;
                        cin >> amount;
                        switch (amount)
                        {
                            case 0:
                            {
                                cout << "Работа программы завершена" << endl;
                                flag = true;
                                break;
                            }
                            break;
                            case 1:
                            {
                                double a = 0, h = 0,  b = 0;
                                cout << "Введите сторону A: " << endl;
                                cin >> a;
                                cout << "Введите высоту: " << endl;
                                cin >> h;
                                cout << "Введите сторону B: " << endl;
                                cin >> b;
                                cout << "Площадь равна: " << trapezoid.area(a, h, b) << endl;
                                break;
                            }
                            break;
                            case 2:
                            {
                                double a = 0, b = 0, c = 0, d = 0;
                                cout << "Введите сторону A: " << endl;
                                cin >> a;
                                cout << "Введите сторону B: " << endl;
                                cin >> b;
                                cout << "Введите сторону C: " << endl;
                                cin >> c;
                                cout << "Введите диагональ: " << endl;
                                cin >> d;
                                cout << "Периметр равен: " << trapezoid.perimetr(a, b, c, d) << endl;
                                break;
                            }
                            break;
                            case 3:
                            {
                                double a = 0, b = 0, h = 0, D1 = 0, D2 = 0, A = 0;
                                cout << "Введите сторону A: " << endl;
                                cin >> a;
                                cout << "Введите сторону B: " << endl;
                                cin >> b;
                                cout << "Введите высоту: " << endl;
                                cin >> h;
                                cout << "Введите диагональ 1: " << endl;
                                cin >> D1;
                                cout << "Введите диагональ 2: " << endl;
                                cin >> D2;
                                cout << "Введите угол: " << endl;
                                cin >> A;
                                cout << "Сторона равна: " << trapezoid.side(a, b, h, D1, D2, A) << endl;
                                break;
                            }
                            break;
                            case 4:
                            {
                                double a = 0, b = 0, c = 0;
                                cout << "Введите сторону A: " << endl;
                                cin >> a;
                                cout << "Введите сторону B: " << endl;
                                cin >> b;
                                cout << "Введите сторону C: " << endl;
                                cin >> c;
                                cout << "Угол равен: " << trapezoid.corner(a, b, c) << endl;
                                break;
                            }
                            break;
                        default: cout << "Неверно выбранная операция" << endl;
                      }
                      break;
                    }
                    default: cout << "Неверно выбранная операция" << endl;
                }
            }
        }

    } while (flag != true);
}

