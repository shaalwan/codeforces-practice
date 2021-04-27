#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;cin>>n;
    ll res = n/2*(n/2+1)-(n/2)*(n/2);
    if(n%2==1)
    res= res-n;
    cout<<res;
    return 0;
}
