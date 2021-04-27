#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll l,r;cin>>l>>r;
    if(l%2!=0)
        l++;
    if(l+2>r)
        {cout<<-1;}
    else
        {cout<<l<<" "<<l+1<<" "<<l+2;}
    return 0;
}
