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
        ll n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max1 = 0, max2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                max1 = max(max1, arr[i]);
            else
                max2 = max(max2, arr[i]);
        }
        int s = ceil(n / 2.0);
        int ans = max(max1, max2);

        if (n % 2 == 1)
        {
            if (max1 < max2 - 1)
                ans = max2 - 1;
            else
                ans = max1;
        }
        cout << ans + s << endl;
    }
}
