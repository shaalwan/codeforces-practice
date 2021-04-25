#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    float n,t,k,d;cin>>n>>t>>k>>d;
    int t1 = ceil(n/k)*t;
    if(t1<d)
        cout<<"NO";
    else
       {
            float cakes = n - k*floor(d/t);
            int t2 = d + ceil(cakes/(k*2))*t;
            if(t2<t1)
                cout<<"YES";
            else
                cout<<"NO";
       }
    return 0;
}
