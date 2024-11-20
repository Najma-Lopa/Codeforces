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

const int mx = 2e5 + 123;
ll arr[mx];
ll sum[mx];
int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + arr[i];
        }

        string st;
        cin >> st;
        st = " " + st;

        ll res = 0;
        int i = 1, j = n;

        while (i < j)
        {
            while (i < j && st[i] != 'L')
            {
                i++;
            }
            while (i < j && st[j] != 'R')
            {
                j--;
            }

            if (i < j && st[i] == 'L' && st[j] == 'R')
            {
                res += sum[j] - sum[i - 1];
                i++;
                j--;
            }
        }
        cout << res << endl;
    }
}