//10.Заменить все отрицательные элементы массива нулями

#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    ofstream f;
    f.open("Task_3.txt");
    srand(time(0));

    const int n = 35;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50 - 20;

        if (arr[i] < 0) {

            arr[i] = 0;
        }
        f << arr[i] << endl;

    }
    f.close();
    return 0;
}