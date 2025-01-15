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

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> v(m);
    vector<bool> bb(n + 1, false);

    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++) {
        ll a;
        cin >> a;
        bb[a] = true;
    }

    string res;
    for (int i = 0; i < m; i++) {
        ll mm = v[i];
        bool pp = true;
        for (int j = 1; j <= n; j++) {
            if (j != mm && !bb[j]) {
                pp = false;
                break;
            }
        }
         if (pp) {
            res += '1';
        } 
        else {
            res += '0';
        }
    }
    cout << res << endl;
}

int main() {
    optimize();

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
