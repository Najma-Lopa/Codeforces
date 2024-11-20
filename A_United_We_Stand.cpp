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
        ll n;
        cin >> n;
        vector<ll> v, b, c;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.rbegin(), v.rend());
        int cnt=1;
        for (int i = 1; i < n; i++)
        {
            if(v[0]==v[i])
            {
                cnt++;
            }
        }
        for (int i = 0; i < cnt; i++)
        {
            c.push_back(v[i]);
        }
        for (int i = cnt; i < n; i++)
        {
            b.push_back(v[i]);
        }
        if (v[0] == v[n - 1])
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (auto u : b)
            {
                cout << u << " ";
            }
            cout << endl;
            for (auto u : c)
            {
                cout << u << " ";
            }
            cout << endl;
        }
    }
}