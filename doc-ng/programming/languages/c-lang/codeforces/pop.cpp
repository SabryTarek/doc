#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main()
{
    int n = 0,
      it = 0,
      c = 0,
      total  = 0;
    bool isPrime = true;





    cin >> it;
    for(int j=0; j<it; j++) {

    cin >> n;

    for(int i = 2; i <= n / 2; ++i)
    {
          if(n % i == 0)
          {
              isPrime = false;
              break;
          }
    }

      if (isPrime)
          v.push_back(n);
        }


    for(int n : v) {
        total += n;
    }

    cout << total << '\n';
      return 0;
}

