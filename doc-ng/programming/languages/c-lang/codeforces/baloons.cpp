#define watch(v) cout << n << '\n';

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(20, 0);
    int t = 0,
        n = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        v.shrink_to_fit();

        set<int> s(v.begin(), v.end());
        watch(s.size());
    }

    return 0;
}
