#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r1,r2,c1,c2,d1,d2;cin>>r1>>r2>>c1>>c2>>d1>>d2;
    set<int> s;
    float a,b,c,d;
    a=(r1+c1-d2)/2;
    if(ceil(a)==a&&a>0&&a<10)
        s.insert(a);
    b=(r1+d2-c1)/2;
    if(ceil(b)==b&&b>0&&b<10)
        s.insert(b);
    c=(c1+d2-r1)/2;
    if(ceil(c)==c&&c>0&&c<10)
        s.insert(c);
    d=(2*r2+r1-c1-d2)/2;
    if(ceil(d)==d&&d>0&&d<10)
        s.insert(d);
    if(s.size()==4&&a+b==r1&&c+d==r2&&a+c==c1&&b+d==c2&&a+d==d1&&b+c==d2)
        cout<<a<<" "<<b<<endl<<c<<" "<<d;
    else
        cout<<-1;
    return 0;
}