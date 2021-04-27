#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        if(s[0]=='T')
        sum += 4;
        if(s[0]=='C')
        sum += 6;
        if(s[0]=='I')
        sum += 20;
        if(s[0]=='D')
        sum += 12;
        if(s[0]=='O')
        sum += 8;
    }
    cout<<sum;
    return 0;


}
