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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll minn=min(min(a,c),d);
    ll p=minn*256;
    ll q=a-minn;
    ll x=min(q,b);
    ll k=x*32;
    ll ans=p+k;
    cout<<ans<<endl; 
}