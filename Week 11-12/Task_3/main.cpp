//Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести данные о самом маленьком роботе.
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

struct Point {
    float h, x, y;
};

struct Robot {
    Point gab;
    float ves;
    float skorost;
    int number;
};

Robot cat;
Robot dog;

void ves1();
void ves2();
float v1, v2;

int main() {

    ofstream f;
    f.open("Task_3");

    f << "Enter data (h,x,y) for the robot #1: ";
    cat.number = 1;
    cin >> cat.gab.h >> cat.gab.x >> cat.gab.y;

    f << "Enter data (h,x,y) for the robot#2: ";
    dog.number = 2;
    cin >> dog.gab.h >> dog.gab.x >> dog.gab.y;

    if (ves1 < ves2)
        f << "Robot cat less, data: " << "(" << cat.gab.h << ";" << cat.gab.x << ";" << cat.gab.y << ")";
    else
        f << "Robot dog less, data: " << "(" << dog.gab.h << ";" << dog.gab.x << ";" << dog.gab.y << ")";

    return 0;

    f.close();
}

void ves1() {
    v1 = cat.gab.h * cat.gab.x * cat.gab.y;
}

void ves2() {
    v2 = dog.gab.h * dog.gab.x * dog.gab.y;
}
