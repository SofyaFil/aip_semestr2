#include <iostream>

using namespace std;

int main()
{
    float x, y , z;

    cout << "Enter the coordinate x" << endl;
    cin >> x ;
    cout << "Enter the coordinate y" << endl;
    cin >> y ;

    if ((y<1)&&(y=x-1)){
        z=1 ;
        z = x*x + y*y ;
        cout << "Yes, belongs" << endl;
    } else {
        cout << "No, belongs" << endl;
    }

    return 0;
}
