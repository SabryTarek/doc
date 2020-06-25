#include<iostream>
using namespace std;

int main()
{
    string test="hello",
            input;
    int it = 0;
    
    
    while(cin >> input)
    {
        // if (input.size() < test.size())
        //     cout<<"NO";
            
        for(int i=0; i<input.size(); i++)
        {
            if(it < test.size() && input[i] == test[it])
                it++;
        }
        it==test.size()?cout<<"YES\n":cout<<"NO\n";
    }
    
    return 0;
}


01022216004