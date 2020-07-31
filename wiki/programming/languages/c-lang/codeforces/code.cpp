#include <iostream>
#include <vector>
using namespace std;


vector<int> convert_decimal_to_binary(int num) {
    vector<int> v;
    while(num != 0) {
        v.push_back(num % 2);
        num = num / 2;
        }
    return v;
    }

int main() {
    vector<int> x = convert_decimal_to_binary(10);
/*
    for(int i=x.size()-1; i>=0; i--) {
        cout << x.at(i);
        }
*/
    for(auto n : x) {
    cout << n <<'\n';
    }
    return 0;
    }
