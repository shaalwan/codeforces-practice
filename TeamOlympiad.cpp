#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n],a1=0,a2=0,a3=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        a1++;
        else if(arr[i]==2)
        a2++;
        else
        a3++;
    }
    int no = min(a1,a2,a3);
    cout<<no<<endl;
    if(no==0)
        return 0;
    else
    {
        while(no--)
        for(int i=0;i<n;i++)
        {
            
        }
    }
}