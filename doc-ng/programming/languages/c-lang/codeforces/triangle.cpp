#define watch(x) cout << (x) << '\n'

#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

int main(int argc, char const *argv[])
{

    int n = 0;

    cin >> n;
    int arr[n];    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    sort(arr, arr+n);
    
    for(int i = 0; i < n; i++)
    {
        watch(arr[i]);
    }
    
    return 0;   
}
