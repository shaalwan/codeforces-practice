#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res,a,n;cin>>n;
    vector<int> v1,v2,v3;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a==1)
         v1.push_back(i);
        else if(a==2)
         v2.push_back(i);
        else
         v3.push_back(i);         
    }
    res = min(v1.size(), min(v2.size(),v3.size()));
    cout<<res;
    for(int i =0;i<res;i++)
    {   
        cout<<endl;
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i];
    }
}