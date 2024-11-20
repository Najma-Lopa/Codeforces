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
        ll a, b, c;
        cin >> a >> b >> c;
        ll d = b / 3;
        ll e = b - (d * 3);
        if ((e+c)<3&&e!=0)
        {
            cout << "-1" << endl;
        }
        else
        {
            ll g = (c + e) / 3;
            int ans;
            if ((b+c) % 3 == 0)
            {
                ans = a +((b+c)/3);
            }
            else
            {
                ans = a +((b+c)/3)+1;
            }
            cout << ans << endl;
        }
    }
}
