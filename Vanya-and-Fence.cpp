// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

ios::sync_with_stdio(0);
cin.tie(0);

int main()
{
    int n,h,w=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>h)
             w++;
            w++;
        }
    cout<<w;
    return 0;
}
