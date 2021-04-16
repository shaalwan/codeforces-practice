#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;cin>>n;
    int arr[n],min,max;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    min=arr[0];max=arr[n-1];
    for(int i=1;i<n-1;i++)
        if(arr[i]>min&&arr[i]<max)
            count++;
    cout<<count;
    return 0;
}