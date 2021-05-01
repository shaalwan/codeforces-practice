#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int direction = 1, count = 1, res = 1; //direction is 1 when up and 0 when down
    int count2 = 0;
    int k;
    cin >> k;
    for (int i = 1; i < n; i++)
    {
        int num;
        cin >> num;
        if (k < num)
        {
            if (direction)
            {
                count++;
            }
            else
            {
                res = max(res, count);
                count = count2 + 2;
            }
            direction = 1;
        }
        else if (k > num)
        {
            count++;
            count2 = 0;
            direction = 0;
        }
        else
        {
            count++;
            if (direction == 0)
                count2++;
        }
        k = num;
    }
    res = max(res, count);
    cout << res;
    return 0;
}
