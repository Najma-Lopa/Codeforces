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
       ll n,k;
        cin>>n>>k;
        vector<ll>x,y;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            x.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            ll b;
            cin>>b;
            y.push_back(b);
        }
        sort(y.begin(),y.end());
        vector<pair<ll,ll>>p;
        for(int i=0;i<n;i++)
        {
            p.push_back({x[i],i});
        }
        sort(p.begin(),p.end());
        // for(auto u:y)
        // {
        //     //cout<<u.first<<" "<<u.second<<endl;
        //     cout<<u<<" ";
        // }
        ll ans[n];
        for(int i=0;i<n;i++)
        {
            ans[p[i].second]=y[i];
        }
        for(auto u:ans)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
}