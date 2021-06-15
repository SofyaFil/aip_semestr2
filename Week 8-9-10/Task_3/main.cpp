//Пользователь задаёт число Ч и Х. Посчитать y: y = 1/x + 1/2x + 1/3x + ⋯ + 1/(Ч x)
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float x, ch, sum;
    int i = 1;
    sum = 0;

    ofstream f;
    f.open ("Task_3.txt");

    f << "Enter numbers: ";
    cin >> ch >> x;

    while (i <= ch) {
            sum = sum + 1 / (i * x);
            i = i + 1;
            f << "Answer: " << sum << endl;
        }

    f.precision (3);
    f.close();

    return 0;
}
