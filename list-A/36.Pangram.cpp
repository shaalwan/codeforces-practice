#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    set<char> q;
    for(int i=0;i<n;i++)
    {
        s[i]=toupper(s[i]);
        q.insert(s[i]);
    }
    if(q.size()==26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}