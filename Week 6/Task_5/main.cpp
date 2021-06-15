/*Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область.
б) y=x/2
   x*x +y*y=1
  */
#include <iostream>

using namespace std;

int main()
{
    float x, y ;

    cin >> x;
    cin >> y;

    if ((x=(1-y*y)/x)&&(y=x/2)){
        cout << "Yes"<< endl;
    }else{
        cout << "No" << endl;
    }
}
