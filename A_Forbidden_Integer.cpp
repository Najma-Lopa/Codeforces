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
     ll n,k,x,p,ans=0;
        cin>>n>>k>>x;
       if(x==1)
       {
        if(n%2==0 && k>1 && ans==0)
        {
            cout<<"YES"<<endl;
            p=n/2;
            cout<<p<<endl;
            for(int i=0;i<p;i++)
            cout<<2<<" ";
            cout<<endl;
            ans=1;
        }
        if(n%2!=0 && k>2 && ans==0)
        {
            cout<<"YES"<<endl;
            p=n/2;
            cout<<p<<endl;
            for(int i=1;i<p;i++)
            cout<<2<<" ";
            cout<<3<<endl;
            ans=1;
        }
       }
       if(x>1 && ans==0)
       {
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        cout<<1<<" ";
        cout<<endl;
        ans=1;
       }
       if(ans==0)
       cout<<"NO"<<endl;
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