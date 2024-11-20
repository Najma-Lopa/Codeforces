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
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        int d;
        // if (a == b)
        //     cnt = 0;
        if (a > b)
        {
            d = a - b;
        }
        else
        {
            d = b - a;
        }
        cnt = d / 10;
        if (d % 10 != 0)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
}