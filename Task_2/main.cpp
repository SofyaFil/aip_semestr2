#include <iostream>

using namespace std;


//Задача 2
//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: h. Трапеция

int main()
{
    int S;
    int a;
    int b;
    int h;
    int c;
    int P;
    cout << " This program uses the formula: S= (a+b)/2*h" << endl;
    cout << " Enter the value of needed sides a and b " << endl;
    cin >> a >> b ;
    cout << " Enter height value" << endl;
    cin >> h ;
    S= (a+b)/2*h ;
    cout << " Area is " << S << endl;
     if (a<b){
       c=(((b-a)/2)^2+h^2)^1/2;
       P=(a+b)+c*2;
       cout << " Perimeter = " << P << endl;
         }else{
           c=(((a-b)/2)^2+h^2)^1/2;
           cout << " Perimeter = " << P << endl;
            }
    return 0;
}


