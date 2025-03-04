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
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5; 
        int mx = 0;
        vector<int>arr;
        arr.push_back(a4 - a2); 
        arr.push_back(a5 - a4 -a1); 
        arr.push_back (a1 + a2); 
        for (int i = 0; i < 3; i++) {
            int a3 = arr[i];
            int cnt = 0;
            if (a3 == a1 + a2) cnt++;
            if (a4 == a2 + a3) cnt++;

            if (a5 == a3 + a4) cnt++;

            mx = max(mx, cnt);
        }
        cout << mx << endl; 
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