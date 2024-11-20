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
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
            cout << "NO" << endl;
        else
        {
            ll sum = 0, summ = 0;
            for (ll i = 0; i < n; i++)
            {
                if (arr[i]> 1)
                {
                    arr[i]--;
                    sum+=arr[i];
                }
                else
                    summ ++;
            }
            if (summ<= sum)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}