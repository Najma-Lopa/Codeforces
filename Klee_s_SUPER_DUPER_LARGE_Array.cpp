
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

ll div(ll x)
{
    return x * (x + 1) / 2;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll l = k, r = k + n - 1;
    ll ans = 2e9;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll p = div(mid) - div(k - 1);
        ll q = div(k + n - 1) - div(mid);
        if (p < q)
        {
            ans = min(abs(p - q), ans);
            l = mid + 1;
        }
        else
        {
            ans = min(abs(p - q), ans);
            r = mid - 1;
        }
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
}