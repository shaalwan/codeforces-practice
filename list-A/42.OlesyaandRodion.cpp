#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n,p;cin>>n>>p;
    int d=log(p)/log(10)+1;
    if(d>n)
        cout<<-1;
    else
       { 
        string s = to_string(p);
        for(int i=0;i<n-d;i++)
            s += '0';
        cout<<s;
       }
    return 0;
}
