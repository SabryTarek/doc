#define watch(x) cout << (x) << '/n'
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    string name;

    while(cin >> name) {

    if(name.length()%2 == 1) cout <<"CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';
    
    }



    return 0;
}