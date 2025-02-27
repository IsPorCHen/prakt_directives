﻿#include <iostream>
#include <math.h>

#define a (1 / (sqrt(10) + sqrt(2)))

#define z \
    (sqrt(a) + sqrt(2)) / (a + 2)

#define f(x, y ,z) (log(pow(z, 3) + x + y)) / (sqrt((x*x) + (y*y) - sqrt(z)))
#define w(x, y) (y * sqrt(pow((x + y), 4))) / (x + (10 * y))
using namespace std;

int main()
{
    setlocale(0, "rus");
    //вариант 18
    //задание 1
    cout << "a: " << a << endl;
    cout << "z: " << z << endl;
    cout << endl;

    //задание 2
    const double x = 4.11;
    const double y = 2.99;

    double _z = w(x, y);

    double logArg = pow(_z, 3) + x + y;
    if (logArg <= 0) {
        cout << "ошибка. аргумент логарифма <= 0" << endl;
        return -1;
    }

    double b = f(x, y, _z);

    cout << "z: " << _z << endl;
    cout << "B: " << b << endl;

    cout << endl;

    //задание 3
    const double a_val = 1.0;
    const double b_val = 5.0;

    double cos4_a = pow(cos(a), 4);
    double sin2_b = pow(sin(b), 2);
    double sin2a_2 = pow(sin(2 * a), 2);

    double y_val = cos4_a + sin2_b + (1.0 / 4.0) * sin2a_2 - 1;

    cout << "y: " << y_val << endl;
}
