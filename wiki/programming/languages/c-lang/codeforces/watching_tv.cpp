#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<pair<string, int> v(5);

//vars
    int t,
        cnum,
        name,
        freq;
// read numer of test cases
    cin >> t;
    for (int i = 0; i < t; i++) {
// read channels namber which has same frequancy        
        cin >> cnum;
        for (int i = 0; i < cnum; i++) {
            cin >> name >> freq;
            v[i].first = name;
            v[i].second = freq;
        }
    }

    return 0;
}