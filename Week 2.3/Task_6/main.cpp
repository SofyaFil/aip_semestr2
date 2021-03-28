//Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3.
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin>> a >> b >> c ;
    if ((a>b)&&(a>c)&&(b<c)){
        a=a*5;
        b=b-3;
       cout << a << endl;
       cout << b << endl;
    }
    if ((a>b)&&(a>c)&&(c<b)){
        a=a*5;
        c=c-3;
       cout << a << endl;
       cout << c << endl;
    }
    if ((b>a)&&(b>c)&&(a<c)){
        b=b*5;
        a=a-3;
       cout<< b << endl;
       cout<< a << endl;
    }
    if ((b>a)&&(b>c)&&(c<a)){
        b=b*5;
        c=c-3;
       cout<< a << endl;
       cout<< c << endl;
    }
    if ((c>a)&&(c>b)&&(a<b)){
        c=c*5;
        a=a-3;
       cout<< c << endl;
       cout<< a << endl;
    }
    if ((c>a)&&(c>b)&&(b<a)){
        c=c*5;
        b=b-3;
       cout<< c << endl;
       cout<< b << endl;
    }

    return 0;
}
