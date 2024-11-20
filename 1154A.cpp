#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a >>b >>c >>d;
    int p;
    if(a>b&&a>c&&a>d)
        p=a;
    else if(b>a&&b>c&&b>d)
        p=b;
    else if(c>a&&c>b&&c>d)
        p=c;
    else
        p=d;
    int x,y,z,w;
    x=(p-a);
    y=(p-b);
    z=(p-c);
    w=(p-d);
    if(x>0)
      cout<<x<< " ";
    if(y>0)
        cout<<y<< " " ;
    if(z>0)
        cout<<z<< " " ;
    if(w>0)
        cout<<w<< " " ;
}
