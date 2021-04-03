#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n,t,k,d;cin>>n>>t>>k>>d;
    int t1 = ceil(n/k)*t;
    //no of cakes prepared in d time  ceil(d/t)*k
    int a = n-ceil(d/t);
    int t2 = d + ceil(a/k)*(t/2);
    if(t2<t1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}