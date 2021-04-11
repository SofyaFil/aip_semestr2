/*Дана функция y=f(x). Найти значение функции по x:
H) y = 2x - 10, если x > 3
   y = 10, если x = 3
   y = (2 * x+1)2 - 1, если x < 3

*/
#include <iostream>

using namespace std;

int main()
{
   float x, y ;

   cout << " Enter x" << endl;
   cin >> x ;
   if (x>3){
       y = 2*x - 10 ;
       cout << " y=" << y << endl;
   } else {
       if (x==3){
           y=10;
           cout << " y=" << y << endl;
       }else{
           if (x<3){
               y=(2 * x+1)*2-1;
               cout << " y=" << y << endl;
           }
       }
   }

   return 0;
}
