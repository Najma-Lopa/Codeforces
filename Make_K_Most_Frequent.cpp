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
    map<ll,ll>mp,mpp;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        mx=max(mx,mp[arr[i]]);
    }
    if(mx==mp[k])
    {
        
        cout<<0<<endl;
    }
    else
    {
            ll flag=0,cntt=0;
        map<ll,ll>left,right;
        for(int i=0;i<n;i++)
        {
            left[arr[i]]++;
            cntt=max(left[arr[i]],cntt);
            if(left[k]==cntt)
            {
                flag=1;
                break;
            }
        }
        ll cnt=0;
         for(int i=n-1;i>=0;i--)
        {
            right[arr[i]]++;
            cnt=max(right[arr[i]],cnt);
            if(right[k]==cnt)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<1<<endl;
        }
        else
        cout<<2<<endl;
    }
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