#define watch(x) cout << (x) << '\n'
#define all(x) begin(x), end(x)

/*******************************************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int t = 0,
        n = 0,
        arr[2];


    for(int i = 0; i < 2; i++)
    {
        cin >> arr[i];
    }


    vector<int> vn;
    for(int i = 0; i < arr[0]; i++)
    {
        cin >> n;
        vn.push_back(n);
    }
    sort(all(vn));



    cin >> n;
    vector<int> vk;
    for(int i = 0; i < arr[1]; i++)
    {
        cin >> t;
        vk.push_back(t);
    }
    sort(all(vk));






    watch("\n\n\n\n");
    
    for(auto&& n : vn)
    {
        watch(n);
    }
    
    watch("\n\n\n\n");

    for(auto&& n : vk)
    {
        watch(n);
    }
    





    return 0;
}