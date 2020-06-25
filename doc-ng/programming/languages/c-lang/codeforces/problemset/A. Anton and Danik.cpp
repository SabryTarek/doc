/*
* problem: https://codeforces.com/contest/734/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
 
int n,ans=0;
char x;

int main()
{
    cin>>n

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x=='A')
            ans++;
        else
        ans--;
    }
    if(ans == 0)
        cout<<"Friendship"<<"\n";
    else if(ans > 0)
    cout<<"Anton"<<"\n";
    else
    cout<<"Danik"<<"\n";

}