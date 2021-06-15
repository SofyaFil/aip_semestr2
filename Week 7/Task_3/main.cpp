/*Протабулировать функцию (шаг и диапазон задаёт пользователь):
 * y =5+3/x + 11x+ctg(2x+15) */
#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
   float dx, xf, x;
   float f;

   std::cout << "Solve function. \nEnter dx: ";
   std::cin >> dx;
   std::cout << "Enter x0: ";
   std::cin >> x;
   std::cout << "Enter xf: ";
   std::cin >> xf;

   std::cout << "\tx\t\ty" << std::endl;

   std::cout.precision(5);

   while (x < xf){
       f = 5+3/x+11*x+1/tan(2*x+15);
       std::cout << "\t"
                  << x
                  << "\t\t"
                  << f
                  << std::endl;
        x += dx;
    }

    return 0;
 }
