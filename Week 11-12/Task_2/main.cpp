/*Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
атрибута: вещественную часть и мнимую. Объявите два числа и получите их
значения от пользователя.
   b)Напишите функцию, которая будет возвращать комплексно-сопряжённое
     число.*/
#include <iostream>
#include <cmath>

using namespace std;

float z, a, b;

struct Function {
    float Re = a;
    float Im = b;
};

Function number;

void function() {
    cout << "z=" << a << "-" << "i*" << b << " - complex conjugate form " << endl;
}

int main() {

    cout << "Enter the real part of the number ";
    cin >> a;
    cout << "Enter the imaginary part of the number";
    cin >> b;
    cout << "z=" << a << "+" << "i*" << b << " - algebraic form" << endl;
    function();

    return 0;
}
