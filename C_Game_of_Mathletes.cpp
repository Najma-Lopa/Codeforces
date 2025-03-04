//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define mem(arr, k) memset(arr, k, sizeof(arr))
#define MOD 1000000007
#define sqr(a) ((a) * (a))
#define endl "\n"
typedef long long ll;
typedef double dd;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int N = 2e5 + 123;
ll prfSum[N];

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll ans = 0;
    for (auto u : mp)
    {
        ll p = k - u.first;
        auto b = mp.find(p);
        if (b != mp.end())
        {
            int cntb = b->second;
            if (u.first == p)
            {
                ans += u.second / 2;
            }
            else
            {
                ll mn = min(u.second, cntb);
                ans += mn;
            }
        }
        mp[u.first] = 0;
        mp[p] = 0;
    }
    cout << ans << endl;
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
