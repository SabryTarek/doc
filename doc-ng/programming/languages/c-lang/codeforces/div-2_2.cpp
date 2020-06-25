#define watch(x) cout << x << '\n'
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int t = 0,
        n = 0,
        s = 0,
        i = 0;

    while (cin >> n >> t)
    {
        int arr[n];

        for (unsigned int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (unsigned int i = 0; i < t; i++)
        {
            if (arr[i] != 0)
            {
                watch(arr[i]);
                for (unsigned int i = 0; i < n; i++)
                {
                    arr[i] -= 1;
                }
            }
        }
    }
    return 0;
}