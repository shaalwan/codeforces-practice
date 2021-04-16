#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n);
    int t1=0;
    int i=n-1;
    while(sum>=t1)
    {
        t1+= arr[i];
        sum -=arr[i];
        i--;
    }
    cout<<n-i-1;
    return 0;
}