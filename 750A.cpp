#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a >>b;
    int d=240-b;
   int count=0;
    int i,p=0,x=0;
    for(i=1;true;i++)
    {
        p=i*5;
         x=x+p;
        if(d<x||i>a)
        break;
    }
    cout<<i-1;
}
