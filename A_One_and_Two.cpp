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
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll psum[n+5];
    psum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        psum[i]=psum[i-1]*arr[i];
    }
    // for(int i=1;i<n;i++)
    // {
    //     cout<<psum[i]<<" ";
    // }
    ll ssum[n+5];
    ssum[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        ssum[i]=ssum[i+1]*arr[i];
    }
    //  for(int i=1;i<n;i++)
    // {
    //     cout<<ssum[i]<<" ";
    // }
    ll ans=-1;
    for(int i=0;i<n-1;i++)
    {
        if(psum[i]==ssum[i+1])
        {
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();

    int t ;
     cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}