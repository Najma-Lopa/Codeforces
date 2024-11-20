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


void ans()
{
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    int t = 0;
    if (v[0].first >= s)
    {
        cout << "YES" << endl;
        return;
    }
    else if (m - v[n - 1].second >= s)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i].first - v[i - 1].second >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        ans();
    }

    return 0;
}