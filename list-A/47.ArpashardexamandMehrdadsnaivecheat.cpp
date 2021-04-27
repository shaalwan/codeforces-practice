#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    n = n % 4;
    if (n == 1)
        cout << 8;
    else if (n == 2)
        cout << 4;
    else if (n == 3)
        cout << 2;
    else
        cout << 6;
    return 0;
}
