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
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    vector<int>v;
    int cnt=0;
    for(auto u:mp)
    {
        if(u.second==1)
        {
            cnt++;
        }
        if(u.second!=1)
        {
            v.push_back(u.first);
        }
    }
    //cout<<cnt<<endl;
    int p=v.size();
    int ans=0;
    if(cnt%2==0 && p%2==0)
    {
        ans=2*((cnt+1)/2)+p;
    }
    else if(cnt%2!=0 && p%2!=0)
    {
        ans=2*((cnt+1)/2)+p;
    }
    else
    ans=2*((cnt+1)/2)+p;
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