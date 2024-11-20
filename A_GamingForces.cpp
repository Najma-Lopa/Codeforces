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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]==1)
            cnt++;
        }
        ll d;   
        if(cnt%2==0)
         d=cnt/2;
        else
        d=cnt/2+1;
        ll ans=n-cnt+d;
        cout<<ans<<endl;

    }
}