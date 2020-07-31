#include <iostream>
using namespace std;
int main() {


    int x = 5;
    int y = 7;

    void* ptr = &x;
    ptr = &y;

    cout << x << '\n';
    cout << *ptr << '\n';

    memset(pionter, sizeByBitNumber, fillWith);
    memset(x, 4, 0);
    return 0;
}

