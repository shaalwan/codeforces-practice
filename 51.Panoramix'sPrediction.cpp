#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    int a[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<15;i++){
        if(a[i] == n){
            if(a[i+1] == m){
                cout<<"YES";
                break;
            }
            else{
                cout<<"NO";
                break;
            }
        }
    }
}
