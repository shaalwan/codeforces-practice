#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    set<char> res;
    for(int i=0;i<s.length();i++)
        res.insert(s[i]);
        if(res.size()==2)
            cout<<0;
        if(res.size()==3)
            cout<<1;
        else
            cout<<res.size()-4;
    return 0;
}
