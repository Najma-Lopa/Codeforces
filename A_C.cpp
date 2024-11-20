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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        int cnt = 0;
        while (a <= n||b<=n)
        {
            if (b > a)
            {
                a+=b;
            }
            else
            {
                b+=a;
            }
            cnt++;
        }
        cout << cnt-1 << endl;
    }
}