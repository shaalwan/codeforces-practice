#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int front=0,end=n-1;
    int s=0,d=0;
    for(int i=0;i<n;i++)
    {   
        if(i%2==0)
        {
            if(arr[front]>arr[end]) 
            {
                s+=arr[front];
                front++;
            }
            else
            {
                s+=arr[end];
                end--;
            }
        }
        else
        {
            if(arr[front]>arr[end]) 
            {
                d+=arr[front];
                front++;
            }
            else
            {
                d+=arr[end];
                end--;
            }
        }
    }
    cout<<s<<" "<<d;
    return 0;
}