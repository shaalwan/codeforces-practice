#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double n,m,a;cin>>n>>m>>a;
    cout<<(ll)ceil(n/a)*(ll)ceil(m/a);
    return 0;
}
