//Протабулировать функцию (шаг и диапазон задаёт пользователь)
//y = -(5+4x)^2 + 8x
#include <iostream>
#include <iomanip>

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
       f = -((5+4*x)*(5+4*x))+8*x;
       std::cout << "\t"
                  << x
                  << "\t\t"
                  << f
                  << std::endl;
        x += dx;
    }

    return 0;
 }































/*#include <iostream>

using namespace std;

int main()
{
   int x, y;

   cin>> x >> y;
   for(int i=0; i < x; i++){
       for(int j=0; j < y; j++)
           std::cout << 0;
       std::cout << std::endl;
    }
   std::cout << std::endl;

   std::getchar();
   std::getchar();

    return 0;
}*/
