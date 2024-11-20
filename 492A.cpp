#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,count=0;
    int i;
    for(i=1; n>0; i++)
    {
        sum=sum+i;
        if(n-sum>=0)
            count++;
            n-=sum;
    }
    cout<<count;
}
