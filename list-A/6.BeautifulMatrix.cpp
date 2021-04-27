#include<bits/stdc++.h>
using namespace std;


int main()
{
    pair<int,int> p;
    int res=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int a;
            cin>>a;
            if(a!=0)
            {
                p.first = i;
                p.second = j;
            }
        }
    }
    res = abs(p.first - 2)+abs(p.second - 2);
        cout<<res;
    return 0;
}