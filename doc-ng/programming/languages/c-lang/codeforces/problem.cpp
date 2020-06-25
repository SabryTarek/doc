#include <iostream>
using namespace std;

int main() {
    string str;
    bool flag = true;

    int t = 0,
        r = 0,
        l = 0;



    cin >> t;
    for(int i=0; i<t; i++){

        cin >> str;

        l = str.length();

        if(l%2 == 1) {
        r = (l-1)/2;
        }else{
            r = l/2;
        }



    for(int i=0; i<r; i++) {
        if(str[i] != str[l-1-i]) {
            flag = false;
            break;
            }
        }
    if(flag == true) {
        cout << "yes" << '\n';
    }else if(flag == false) {
        cout << "no" << '\n';
        }



        }
    return 0;
}
