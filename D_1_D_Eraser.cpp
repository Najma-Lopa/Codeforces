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
    long long int t, n, m, i;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> m;
        cin >> s;
        long long int cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                i = i + m - 1;
            }
        }
        cout << cnt << endl;
    }
}