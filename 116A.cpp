#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
     int a,b;
    int p=0,d=0;
    for(int i=0;i<t;i++)
    {
       // int a,b;
        cin>>a >>b;
       // p=0,d=0;
        p=(d+a)-b;
        if(p<0)
            d=0;
        else
            d=p;;
    }
    cout<<p;
}
