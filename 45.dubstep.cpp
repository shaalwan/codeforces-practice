#include<bits/stdc++.h>
using namespace std;
#define long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,answer;cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
                    {
                        i=i+2;
                        cout<<" ";
                    }
        else
            cout<<s[i];
        }
    return 0;
}