#include <iostream>
#include <cmath>
using namespace std;

#define n 1

#if n == 1
#define y 2
#define t (5.0 / (1 + pow(y, 2)))
#define z 4
#define x (2 * y + 3 * sinh(t) - z) 
#define p "Задание 1\n"
#elif n == 2
#define x 0.12
#define y -8.75
#define z sqrt(x * sin(y))
#define arctgz atan(z)
#define a (y + (x * arctgz / y + pow(x, 2)))
#define p "Задание 2\n"
#endif

int main() {
    setlocale(0, "rus");
    int numb;
    cout << "Введите номер задания (1, 2 или 3): ";
    cin >> numb;

    if (numb != 3) {
        cout << p;
        cout << x << endl;
    }
    else {
        cout << "Задание 3\n";
        cout << "Введите угол α (в радианах): ";
        double alpha;
        cin >> alpha;
        double result = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
        cout << "Результат: " << result << endl;
    }
    return 0;
}

