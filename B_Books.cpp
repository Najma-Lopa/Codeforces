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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++)
    {
        prfSum[i]=prfSum[i-1]+arr[i];
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<prfSum[i]<<" ";
    // }
    // cout<<endl;
    ll p=binary_search(prfSum)
    ll lw=lower_bound(prfSum+1,prfSum+n+1,k)-(prfSum+1);
    cout<<lw<<endl;
}

int main()
{
    optimize();

    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}