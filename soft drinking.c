#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>> n >> k >> l >> c >> d >> p >> nl >>np;
    int drinks =k*l;
    int toasts = drinks/n;
    int salt =c*p;
    int st =p/np;
    int ans = min(min(toasts, salt, st));
    int ans1= ans/n;
    cout<<ans<<"\n";
}
