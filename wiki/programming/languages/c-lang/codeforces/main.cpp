#include <iostream>
using namespace std;

int main() {
    int t = 0;
    float l = 0;

    cin >> t;
    for(int i = 0; i < t; i++)
    {               
        cin >> l;
        l = 6-(l/6);
    cout << l << '\n';
    }
    
    return 0;
}