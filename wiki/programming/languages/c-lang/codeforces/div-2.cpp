#include <iostream>

using namespace std;

int main()
{
    int x = 0,
        a = 0,
        b = 0;

    while (cin >> x)
    {

        if (1 <= x <= 100)
        {

            for (unsigned int a = 1; a <= x; a++)
            {
                for (unsigned int b = 1; b <= x; b++)
                {
                    if ((a * b > x) && (a / b < x) && (a % b == 0) && (a != b))
                    {
                        cout << a << ' ' << b << '\n';
                        exit(0);
                    }
                }
            }
            cout << -1 << '\n';
        }
    }
    return 0;
}