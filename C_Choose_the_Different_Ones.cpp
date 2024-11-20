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
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll>v(n);
        vector<ll>ve(m);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            //mp[v[i]]++;
            mp[v[i]] = 1;
            //cout<<mp[v[i]]<<" "<<mp[i];
        }
        // for(auto u:mp)
        // {
        //     cout<<u.first<<" "<<u.second;
        // }
        for (int i = 0; i < m; i++)
        {
            cin >> ve[i];
            // mp[ve[i]]++;
            if(mp[ve[i]]==1)
            {
                mp[ve[i]]=-1;
            }
            else if(mp[ve[i]]==0)
            {
                mp[ve[i]]=2;
            }
        }
        ll p=k/2,q=k/2;
        int flag=0;
        for(int i=1;i<=k;i++)
        {
            
            if(mp[i]==1)
            {
                p--;
            }
            else if(mp[i]==2)
            {
                q--;
            }
            else if(mp[i]==0)
            {
                flag=1;
            }
        }
        if(p>=0&&q>=0&&flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}