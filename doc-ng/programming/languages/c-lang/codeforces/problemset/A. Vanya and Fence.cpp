/*
* problem: https://codeforces.com/contest/677/problem/A
*/
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {

    int n = 0,
        l = 0,
        len = 0;

    vector<int> v;

    while(cin >> n >> l) {
        for(int i=0; i<n; i++) {
            cin >> len;
            if(len > l)
                v.push_back(2);
            else
                v.push_back(1);

        }
        cout << accumulate(v.begin(), v.end(), 0) << "\n";
    }


    return 0;
}


#include<bits/stdc++.h>
using namespace std;
 
int n,h,x,ans=0;
 
int main()
{
    cin>>n>>h;

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x>h)
            ans++;
        ans++;
    }
    cout<<ans<<"\n";
}