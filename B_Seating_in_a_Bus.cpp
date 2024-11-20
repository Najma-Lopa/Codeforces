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
#define mem(arr, k) memset(arr, k, sizeof(arr))
#define MOD 1000000007
#define sqr(a) ((a) * (a))
#define endl "\n"
typedef double dd;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int N = 2e5 + 123;
ll prfSum[N];

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

ll n;
bool visit[N];

void ans()
{
    mem(visit, false);
    ll n;
    cin >> n;
    ll arr[n + 12];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    visit[arr[1]] = true;

    for (int i = 2; i <= n; i++)
    {

        ll a = arr[i] + 1;
        ll b = arr[i] - 1;
        // cout << a << " " << b << endl;

        if (visit[a] == true || visit[b] == true)
        {
            visit[arr[i]] = true;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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