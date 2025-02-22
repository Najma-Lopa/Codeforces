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
    int n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>arrr(n);
    for(int i=0;i<n;i++)
    {
        vector<int>arr;
        ll cnt=0,cntt=0;
        for(int j=0;j<m;j++)
        {
            int p;
            cin>>p;
            arr.push_back(p);
            cnt+=arr[j];
            cntt+=arr[j]*(-j);
        }
        arrr[i]={cnt,cntt};

    }
    sort(arrr.rbegin(),arrr.rend());
    ll sm=0,smm=0;
    for(int i=0;i<n;i++)
    {
        sm+=arrr[i].second;
        smm+=arrr[i].first*(n-i);
    }
    ll ans=(smm*m)+sm;
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