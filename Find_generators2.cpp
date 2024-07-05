#include <bits/stdc++.h>
using namespace std;
int powmod(int a, int b, int m)
{
    int res = 1;
    while (b--)
    {
        res = (res * a) % m;
    }
    return res;
}
bool isgenerator(int g, int p)
{
    set<int> s;
    for (int i = 1; i < p; i++)
    {
        s.insert(powmod(g, i, p));
    }
    return s.size() == p - 1;
}
int main()
{
    for (int i = 1; i <= 22; i++)
    {
        if (isgenerator(i, 23))
        {
            cout << i << endl;
        }
    }
    return 0;
}