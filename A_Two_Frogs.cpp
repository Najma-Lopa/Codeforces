#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (((b - a)-1) % 2 == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}