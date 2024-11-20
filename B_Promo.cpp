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
    
        ll n, q;
        cin >> n >> q;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            v.push_back(m);
        }
        sort(v.rbegin(), v.rend());
        ll p, c;
        ll arr[n+5]={0};
        for(int i=0;i<n;i++)
        {
            arr[i+1]=arr[i]+v[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>p>>c;
            ll ans=arr[p]-arr[p-c];
            cout<<ans<<endl;
        }  
    }