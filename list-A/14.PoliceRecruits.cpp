#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int rec = 0, crimes = 0;
    for(int i=0;i<n;i++)
    {
        int k;cin>>k;
        if(k>0)
            rec+=k;
        else
            if(rec==0)
                crimes++;
            else
                rec -=1;
    }
    cout<<crimes;
    return 0;
}