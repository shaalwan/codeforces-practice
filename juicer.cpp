#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,d;cin>>n>>b>>d;
    int sum = 0,count = 0;
    for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x>b)
                continue;
            sum += x;
            if(sum > d)
                {
                    sum = 0;
                    count++;
                }   
        }
    cout<<count;
    
    return 0;
}