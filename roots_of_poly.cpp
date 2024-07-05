#include <bits/stdc++.h>
using namespace std;
int poly(int x)
{
    return pow(x, 5) + 2 * pow(x, 4) + 5 * pow(x, 3) + 3 * pow(x, 2 ) + 12 * x + 18;
}
int main()
{
    for (int i = 1; i <= 23; i++)
    {
        if (poly(i) % 23 == 0)
        {
            cout << i << " is a root of the polynomial" << endl;
        }
    }
    return 0;
}