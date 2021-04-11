#include <iostream>

using namespace std;

int main()
{
    int num;
     std::cout << "Enter number" << std::endl;
     std::cin >> num;
      switch (num){
         case 1:
     std::cout << "one" << std::endl;
         break;
         case 2:
     std::cout << "two" << std::endl;
         break;
         case 3:
     std::cout << "three" << std::endl;
         break;
         default:
     std::cout << "too much!!!" << std::endl;
    }
}
