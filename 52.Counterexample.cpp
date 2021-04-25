#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll l,r;cin>>l>>r;
    if(r-l<2)
        cout<<-1;
    else 
    {
        for(int i=2;i<l-r;i++)
            if(__gcd(l+1,l+i)==1&&__gcd(l,l+i)!=1)
            {
                cout<<l<<" "<<l+1<<" ";
                cout<<l+i;
                return 0;
            }
    }
    cout<<-1;
    return 0;
}
