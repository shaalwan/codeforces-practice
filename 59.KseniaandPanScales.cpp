#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0);
    string s;cin>>s;
    string L,R;
    int i=0;
    while(s[i]!='|')
        {
            L += s[i];
            i++;
        }
       // cout<<L<<" ";
    i++;
    while(i<s.length())
        {
            R += s[i];
            i++;
        }
        // cout<<R<<" ";
    string s1;cin>>s1;
    for(int i=0;i<s1.length();i++)
    {
        if(L.length()<=R.length())
        L += s1[i];
        else 
        R += s1[i];
    }
    // cout<<R.length()<<" "<<L.length()<<" ";
    if(R.length()==L.length())
        cout<<L<<"|"<<R;
    else
        cout<<"Impossible";
    return 0;
}

