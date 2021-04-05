#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int a,b,res;cin>>a>>b;
    res = 7 - max(a,b);
    if(res == 1)
        cout<<"1/6";
    else if(res == 2)
        cout<<"1/3";
    else if(res == 3)
        cout<<"1/2";
    else if(res == 4)
        cout<<"2/3";
    else if(res == 5)
        cout<<"5/6";
    else if(res == 6)
        cout<<"1/1";
    return 0;
}