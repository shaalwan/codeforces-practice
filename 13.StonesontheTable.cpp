#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int count = 0;
    string s;cin>>s;
    char last = s[0];
    for(int i=1;i<n;i++)
    {
        if(last==s[i])
            count++;
        last = s[i];
    }
    cout<<count;
    return 0;
}