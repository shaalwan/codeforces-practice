#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count = 1,dp =0;
    int n;cin>>n;
    string s;cin>>s;
    dp = s[1]-48;
    for(int i=0;i<n-1;i++)
        {
            cin>>s;
            if(s[0]-48==dp)
                count++;
            dp = s[1]-48;
        }
        cout<<count;
    return 0;
}