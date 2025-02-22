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

int fun(vector<int> A) {
    int mx = 1, cnt = 1;
    int n=A.size();
    for (int i = 1; i < n; i++) {
        if (A[i] >= A[i - 1]) {
            cnt++;
            mx = max(mx, cnt);
        } else {
            cnt = 1;
        }
    }
    return mx;
}

void solve() {
    int n, X;
    cin >> n >> X;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    int ans = fun(A);
    
    for (int i = 0; i < n; i++) {
        vector<int> B = A;
        B[i] *= X;
        ans = max(ans, fun(B));
    }

    cout << ans << endl;
}

int main() {
    optimize()
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}



