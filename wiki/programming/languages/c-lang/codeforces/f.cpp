#define watch(x) cout << " is " << (x) << '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0,
        l,
        a;
    cin >> n;
    vector<int> z(n, 0);


    cin >> l;
    for(int i = 0; i < l; i++)
    {
        cin >> a;
        z[a]++;
    }
    cin >> l;
    for(int i = 0; i < l; i++)
    {
        cin >> a;
        z[a]++;
    }
    
    for(int i = i; i < z.size(); i++)
    {
     if(z[i] == 0) {
         watch("Oh, my keyboard!");
         break;
     } else {
         watch("I become the guy.");
     }
    }






    return 0;
}
