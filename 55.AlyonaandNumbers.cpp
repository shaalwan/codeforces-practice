#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;cin>>n>>m;
    ll arrn[5]={0},arrm[5]={0};
    fill(arrn,arrn+5,floor(n/5));
    fill(arrm,arrm+5,floor(m/5));
    for(int i=1;i<=n%5;i++)
        arrn[i]++;
    for(int i=1;i<=m%5;i++)
        arrm[i]++;
    // for(int i=0;i<5;i++)
    // cout<<arrn[i]<<" "<<arrm[0]<<" ";
    // cout<<arrn[0]*arrm[0] <<" "<< arrn[1]*arrm[4] <<" "<< arrn[2]*arrm[3] <<" "<<arrn[3]*arrm[2] <<" "<< arrn[4]*arrm[1]<<" ";
    ll sum = arrn[0]*arrm[0] + arrn[1]*arrm[4] + arrn[2]*arrm[3] + arrn[3]*arrm[2] + arrn[4]*arrm[1];
    cout<<sum;
    return 0;
}