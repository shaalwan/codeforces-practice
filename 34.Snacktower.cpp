#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;cin>>n;
    p=n;
    int arr[n];
    priority_queue<int> q;
    for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            q.push(x);
            while(q.top()==p)
                {
                    cout<<q.top()<<" ";
                    q.pop();
                    p--;
                }
            cout<<endl;
        }
    return 0;
}