//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s,t;
        ll minn,minn2;
        cin>>n>>s>>t;
        minn=n-s;
        minn2=n-t;
        ll ans=max(minn,minn2);
        cout<<ans+1<<endl;
    }
}