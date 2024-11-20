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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n%2050!=0)
        {
            cout << "-1" << endl;
        }
        else
        {
        ll sum = 0;
        ll p = n / 2050;
        while (p > 0)
        {
            ll d = p % 10;
            sum = sum + d;
            p = p / 10;
        }
            cout << sum << endl;
        }
    }
}