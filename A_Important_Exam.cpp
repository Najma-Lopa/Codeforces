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

    string st="";
    vector<string> v;
    map<char,ll>mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st+=s;
        v.push_back(s);
    }
    int arr[k+5];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    ll ans=0;
    for (int i = 0; i < k; i++)
    {
       ll a = 0, b = 0, c = 0, d = 0, e = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j][i]== 'A')
            {
                a++;
            }
            else if (v[j][i]== 'B')
            {
                b++;
            }
            else if (v[j][i]== 'C')
            {
                c++;
            }
            else if (v[j][i]== 'D')
            {
                d++;
            }
            else if (v[j][i]== 'E')
            {
                e++;
            }
        }
        int mx=max(a,max(b,max(c,max(d,e))));
       // cout<<mx<<endl;
       ans+=mx*arr[i];
        
    }
    cout<<ans<<endl;
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