#include<bits/stdc++.h>
using namespace std;

int main()
{
    int answer = 0;
    string s;
    getline(cin,s);
    set<char> res;
    for(int i=0;i<s.length();i++)
        res.insert(s[i]);
    if(res.size()>3)
    answer = res.size()-4;
    else if(res.size()==3)
    answer = 1;
    cout<<answer;
    return 0;
}
