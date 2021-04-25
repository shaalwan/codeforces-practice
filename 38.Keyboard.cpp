#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    char turn;cin>>turn;
    string s;cin>>s;
    string key ="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(turn == 'R')
        k = -1;
    else
        k = +1;
    for(int i=0;i<s.length();i++)
    {
       int j = key.find(s[i]);
       s[i] = key[j+k];
    }
    cout<<s;
    return 0;
}