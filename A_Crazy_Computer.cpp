// بِسْمِ ٱللَّهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long


int main()
{
    optimize();
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
     cin>>a[i];
    }
    ll cnt=1;
    for(ll i=n-1;i>=1;i--)
    {
        if(a[i]-a[i-1]>m)
        {
         break;
        }
        cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
