#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,p,count = 0;cin>>k>>p;
    for(int i=1;i<=10;i++)
    {
        count++;
        if((i*k)%10==p||(i*k)%10==0)
            break;
    }
    cout<<count;
    return 0;
}