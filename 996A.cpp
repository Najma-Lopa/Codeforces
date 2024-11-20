#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int ans,r;
    ans=n/100;
    r=n%100;
    ans=ans+r/20;
    r=r%20;
    ans=ans+r/10;
    r=r%10;
    ans=ans+r/5;
    r=r%5;
    ans=ans+r/1;
    r=r%1;
    cout<<ans;
}
