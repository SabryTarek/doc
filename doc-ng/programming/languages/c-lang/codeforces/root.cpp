#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,
        n,
        counter = 0;

    cin >> m >> n;
    while(m/n != 0) {
        m = m/n;
        ++counter;
    }
    if(counter == n) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    // m = 5;
    // n = 10;
    // counter = m/n;
    // cout << counter << '\n';
    return 0;
}
