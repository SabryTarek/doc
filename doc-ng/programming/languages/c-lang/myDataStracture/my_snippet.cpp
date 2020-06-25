#define watch(x) cout << (x) << '/n'
#define all(x) std::begin(x), std::end(x)
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> v;
    int t = 0,
        n = 0,
        s = 0;



    std::generate(all(v), [] () {return i++;});
    // auto n = count_if(all(v), [i = 0] () {
    //   return v[i]%2 == 0;
    // });




    return 0;
}