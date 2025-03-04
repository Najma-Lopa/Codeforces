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
    string s;
    getline(cin, s);
    if (s[0] == _UPPER)
    {
        s[0] = s[0];
    }
    else
        s[0] = s[0] - 32;
    // cout<<s<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] != _UPPER)
            {
                s[i] = s[i];
                s[i + 1] = s[i + 1] - 32;
            }
            else if(s[i+1]==_UPPER)
            {
                s[i+1]=s[i+1];
            }
        }
    }
    cout << s << endl;
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

    return 0;
}