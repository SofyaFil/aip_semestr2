//Пользователь задаёт число Ч и x. Посчитать y:
//y =x-x^3/3!+x^5/5!-…x^Ч/Ч!

#include <iostream>
#include <fstream>
#include<cmath>

using namespace std;

long int fact(long int N) {
    if (N < 1)
        return 0;
    else
        if (N == 1)
            return 1;
    else
        return N * fact(N-1);
}

int main(void)
{
    int x, ch, sum;
    int i = 1;
    sum = 0;

    ofstream f;
    f.open("Task_2.txt");

    f<< "Enter x and 'Ч'" << endl;
    cin>> x >> ch;

    if (ch %= 0){
        while (i<ch) {
            long int N;
          N=i+ch;
        sum= sum+x-(x^N/ fact(N));
        f<< "summa = " << sum << endl;
    }
    }else{
           f<< "Please, enter an even number for 'Ч'" << endl;
        }

    std::getchar();
    std::getchar();

    f.close();

    return 0 ;
}
