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
        ll t1, t2;
        cin >> t1 >> t2;
        ll p;
        cin >> p;

        if (t1 > p && t2 > p)//সব থেকে ছোট
        {
            ll st = min(t1, t2);
            ll l = st - 1;
            cout << l << endl;
        }
        if (t1 < p && t2 < p) //সব থেকে বড়;
        {
            ll sp = max(t1, t2);
            ll l = n - sp;
            cout << l << endl;
        }
        if (t1 < p && p < t2 || t1>p && t2<p)//মিডিল টার্ম ;
        {
            ll div = (t1 + t2) / 2;
            ll s1 = abs(div - t1);
            ll s2 = abs(t2 - div);
            ll s = min(s1, s2);
            cout << s << endl;
        }
    }
}