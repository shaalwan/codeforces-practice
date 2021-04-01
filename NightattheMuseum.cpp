#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int mid = 97;
    int time =0;
    for(int i=0;i<s.length();i++)
    {
        int difference = abs(s[i]-mid);
        if(difference>13)
            time += 26-difference;
        else
            time +=difference;
        mid = s[i];
    }
    cout<<time;
}