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

const int mx = 1e5 + 123;
vector<int> arr;
int main()
{
    optimize();
    ll n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.rbegin(), arr.rend());
    ll cnt = 0;
    ll res=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= s)
        {
            ll ans = s/arr[i];
            if ((arr[i] * (ans + 1)) > s)
            {
                res += ans ;
                if (res < n)
                    cnt++;
            }
        }
        else
            cnt++;
            res++;
    }
    cout << cnt << endl;
}