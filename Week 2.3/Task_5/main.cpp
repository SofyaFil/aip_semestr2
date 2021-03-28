/* Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
 Время (неделя, час, сутки) */
#include <iostream>

using namespace std;

int main()
{
   int week;
   int hour;
   int day;
   int transfer;

   cout<< "Enter one number corresponding to the operation you need:." << endl;
   cout<< " 1. Transfer Week -> day -> hour " << endl;
   cout<< " 2. Transfer Day -> week -> hour" << endl;
   cout<< " 3. Transfer Hour -> week -> day" << endl;
   // 1 week= 7 day= 168 hour
   // 1 day= 1/7 week= 24 hour
   // 1 hour= 1/168 week= 1/24
   cin>> transfer ;
   switch (transfer) {
    case 1:
       cout<< "Enter the number of weeks" << endl;
       cin>>week;
       day= week*7;
       cout<< " day " ;
       cout << day;
       hour= week * 168;
       cout<< " hour ";
       cout << hour;
       break;
    case 2:
       cout<< "Enter the number of days";
       cin>>day;
       week= day/7;
       cout<< " week ";
       cout<< week;
       hour= day*24;
       cout<< " hour ";
       cout << hour;
       break;
    case 3:
       cout<< "Enter the number of hours";
       cin>>hour;
       week= hour/168;
       cout<< " week " ;
       cout<< week;
       day=hour/24;
       cout<< " day " ;
       cout<< day;
       break;
    default:
       std::cout << " Stupido! Please enter a number from 1 to 3 ";
    }
   std::getchar();
   std::getchar();

   return 0;
}
