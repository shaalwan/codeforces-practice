#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;cin>>n>>k;
    int arr[2*n+1];
    for(int i=0;i<2*n+1;i++)
        cin>>arr[i];
    for(int i=1;k>0;i=i+2)
    {
        if((arr[i-1]<arr[i]-1)&&(arr[i+1]<arr[i]-1))
        {
            arr[i]--;
            k--;
        }    
    }
    for(int i=0;i<2*n+1;i++)
        cout<<arr[i]<<" ";
    return 0;
}
