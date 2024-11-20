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
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,k;
        cin>>x>>y>>k;
        ll p,q;
        if(x%k==0)
        {
            p=x/k;
        }
        else
        {
            p=(x/k)+1;
        }
        if(y%k==0)
        {
            q=y/k;
        }
        else
        {
            q=(y/k)+1;
        }
        ll ans=max(p,q);
        if(p>q)
        {
            cout<<ans*2-1<<endl;
        }
        else
        {
            cout<<ans*2<<endl;
        }
    }
}