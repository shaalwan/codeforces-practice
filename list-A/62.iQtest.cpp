#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char arr[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>arr[i][j];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            int count = 0;
            if(arr[i][j]==arr[i][j+1])
                count++;
            if(arr[i][j]==arr[i+1][j])
                count++;
            if(arr[i][j]==arr[i+1][j+1])
                count++;
            if(count!=1)
                {
                    cout<<"YES";
                    return 0;
                }
        }
        cout<<"NO";
    return 0;
}

