#define watch(x) cout << (x) << '\n'
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



    vector<int> gemy(int min, int max)
    {
        vector<int> v;

        for( ; min < max; min++)
        {
            v.push_back(min);
        }

        return v;

    }

int main()
{




    vector<int> v2 = gemy(3, 9);

    for(auto i : v2)
    {
        watch(i);
    }





    return 0;
}
