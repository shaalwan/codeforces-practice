#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,j=0;cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cout<<char('a'+j);
        j++;
        if(j>=k)
        j=0;
    }
    return 0;
}