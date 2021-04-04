#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,dis = 0;cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        char c;cin>>c;
        long long int d;cin>>d;
        if(c=='+')
            x += d;
        else if(c == '-' && (x-d)>=0) 
            x -= d;
        else
            dis++;
    }
    cout<< x <<" "<<dis;
    return 0;
}