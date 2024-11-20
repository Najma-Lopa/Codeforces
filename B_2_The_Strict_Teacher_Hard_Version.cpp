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
        vector<ll> v;
        for (int i = 0; i < m; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        while (k--)
        {
            ll p;
            cin >> p;
            ll lo = lower_bound(v.begin(), v.end(), p) - v.begin();
            ll up = upper_bound(v.begin(), v.end(), p) - v.begin();
            if(up==0)
            {
                cout<<v[0]-1<<endl;
            }
            else if(up==m)
            {
                cout<<n-v[m-1]<<endl;
            }
            else
            {
                ll g=up;
                ll h=lo;
                //cout<<g<<" "<<h<<endl;
                ll div = (v[g] + v[h-1]) / 2;
            ll s1 = abs(div - v[g]);
            ll s2 = abs(v[h-1]- div);
            ll s = min(s1, s2);
            cout << s << endl;
            }
        }
    }
}
