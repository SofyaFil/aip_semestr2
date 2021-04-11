/*Дана функция y=f(x). Найти значение функции по x:
A) y = 2x - 10, если x > 0
y = 0, если x = 0
y = 2 * |x| - 1, если x < 0

*/
#include <iostream>

using namespace std;

int main()
{
    float x, y ;

    cout << "Enter x" << endl ;
    cin >> x;
    if (x>0){
        y = 2*x - 10 ;
        cout << " y= " << y <<  endl;
    } else {
        if (x==0){
            y=0 ;
            cout << " y= " << y <<  endl;
        } else {
            if (x<0){
                y= 2* abs(x) -1 ;
                cout << " y= " << y <<  endl;
            }
        }

}

    return 0;
}
