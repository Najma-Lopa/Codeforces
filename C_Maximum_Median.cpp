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

ll arr[N];
ll n,a;
ll solve(ll mid)
{
    ll sum = 0;
    for (int i = n / 2 + 1; i <= n; i++)
    {
        sum += max(0ll, (mid - arr[i])); //0ll দেওয়ার কারন long long এ ভ্যালু দেওয়া;

    }
    return (sum<=a);
}

int main()
{
    optimize();

    int t = 1;
    // cin>>t;

    while (t--)
    {
        //ll a;
        cin >> n >> a;
        // int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr+1,arr+n+1);
        ll l = 0, r = 2e9 + 123;
        ll ans;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (solve(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}