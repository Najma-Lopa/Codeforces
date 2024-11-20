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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c)
        {
            a = 1;
            b = 1;
            c = 1;
        }
        if (a > b && a > c)
        {
            b = a - b + 1;
            c = a - c + 1;
            a = 0;
        }
        else if (b > a && b > c)
        {
            a = b - a + 1;
            c = b - c + 1;
            b = 0;
        }
        else if (c > a && c > b)
        {
            a = c - a + 1;
            b = c - b + 1;
            c = 0;
        }
        else if (a == b && a > c)
        {
            c = a - c + 1;
            a = 1;
            b = 1;
        }
        else if (a == c && a > b)
        {
            b = a - b + 1;
            a = 1;
            c = 1;
        }
        else if (b == c && b > a)
        {
            a = b - a + 1;
            b = 1;
            c = 1;
        }
        cout << a << " " << b << " " << c << endl;
    }
}