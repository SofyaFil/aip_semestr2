/* |x| + x^5, если x=−2. Ответ: -30*/
#include <iostream>

using namespace std;

int main()
{
    float x;
    float s;
    cout << "Enter the value x" << endl;
    std:: cin >> x ;
    s=abs(x) +(x*x*x*x*x);
    cout << s << endl;
    return 0;
}
