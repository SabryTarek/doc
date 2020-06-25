/*
 * problem: https://codeforces.com/contest/734/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
 
string s1, s2;

int main()
{
    cin >> s1;
    cin >> s2;

    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int x = accumulate(s1.begin(), s1.end(), 0) << "\n";
    int y = accumulate(s2.begin(), s2.end(), 0) << "\n";

    x > y ? watch(1) | x < y ? watch(-1) | watch(0);

    return 0;
}