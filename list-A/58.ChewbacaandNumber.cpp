#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>'4')
            s[i]= '9'-s[i]+'0';
    }
    if(s[0]=='0')
        s[0]='9';
    cout<<s;
    return 0;
}

