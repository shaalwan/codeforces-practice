#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int h[n],g[n],res = 0;
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>g[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(h[i]==g[j])
                res++;
    }
    cout<<res;
    return 0;
}