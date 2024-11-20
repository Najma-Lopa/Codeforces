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
        int n;
        cin >> n;
        vector<int> v;
        int a;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        vector<int> vp;
        for (auto u : v)
        {
            int flag = 0;
            for (auto p : vp)
            {
                if (u == p)
                    flag = 1;
            }
            if (flag == 0)
            {
                vp.push_back(u);
            }
        }
        for (auto k : vp)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}