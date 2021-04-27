#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,count=0;cin>>x;
    while(x/2!=0)
    {
        if(x%2==1)
            count++;
        x=x/2;
    }
    cout<<count+1;
    return 0;
}
