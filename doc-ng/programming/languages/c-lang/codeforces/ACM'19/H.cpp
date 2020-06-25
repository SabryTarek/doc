// H. Queries about less or equal elements
// https://codeforces.com/group/sLFc12da7x/contest/233698/problem/H

#define watch(x) cout << (x) << '\n'
#define print(x) cout << (x) << ' '
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{

    int t = 0,
        n = 0,
        c = 0,
        i = 0;

    while (cin >> t >> n)
    {
        vector<int> v;
        int a[t],
            b[n];

        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] <= a[j])
                    c++;
            }
            v.emplace_back(c);
        }

        cout << '\n';
        for (auto &&i : v)
        {
            print(i);
        }
    }

    return 0;
}