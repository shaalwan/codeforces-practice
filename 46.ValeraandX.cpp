#include <bits/stdc++.h>
using namespace std;
#define long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    set<char> s;
    char arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            s.insert(arr[i][j]);
        }
    if (s.size() != 2)
    {
        cout << "NO";
        return 0;
    }
    else
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (i == j || i == n - 1 - j)
                {
                    if (arr[i][j] != arr[0][0])
                    {
                        cout << "NO";
                        return 0;
                    }
                }
                else
                {
                    if (arr[i][j] != arr[0][1])
                    {
                        cout << "NO";
                        return 0;
                    }
                }
            }
    cout << "YES";
    return 0;
}