#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int t = 0,
        s = 0,
        p = 0;

    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> p;
        for(int i = 0; i < p; i++) {         
            cin >> s;
            v.push_back(s);
        }
        v.shrink_to_fit();
        if(v.at(0)%2 == 0) {
            
        } else {

        }
    }

    for(auto n : v) {
        cout << n << '\n';
    }
        return 0;
}
