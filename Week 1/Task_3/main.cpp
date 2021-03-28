#include <iostream>

using namespace std;

int main()

//Задача 3
/* Пользователь вводит три числа.
   Найдите среднее арифметическое этих чисел,
   а также разность удвоенной суммы первого и третьего чисел и утроенного второго числа. */

{
   int num;
   int num2;
   int num3;
   int S;
   int R;
   cout << " Enter the three number " << endl;
   cin >> num >> num2 >> num3 ;
   S=(num+num2+num3)/3;
   cout << " The arithmetic mean of these numbers= " << S << endl;
   cout << " The difference between the doubled sum of the first and third numbers and the tripled second number = " << endl;
   R=((num+num3)*2)-3*num2;
   cout << R << endl;
   return 0;
}
