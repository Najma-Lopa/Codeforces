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
#define endl "\n"
typedef long long ll;
const int N = 2e5 + 123;
ll prfsum[N];

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        prfsum[i + 1] = prfsum[i] + arr[i];
    }

    int dt = 0;
    vector<bool> spp(n + 2, false);
    for (int i = 0; i < n; i++) {
        if (arr[i] <= n) {
            spp[arr[i]] = true;
        }
    }
    while (spp[dt]) {
        dt++;
    }

    vector<vector<int>> sp(n, vector<int>(n, 0));
    for (int l = 0; l < n; l++) {
        vector<bool> sn(n + 2, false);
        int cr = 0;
        for (int r = l; r < n; r++) {
            if (arr[r] <= n) {
                sn[arr[r]] = true;
            }
            while (sn[cr]) {
                cr++;
            }
            sp[l][r] = cr;
        }
    }

    ll mn = LLONG_MAX;
    ll mx = LLONG_MIN;
    bool f = false;
    for (int l = 1; l < n - 1; l++) {
        if (sp[0][l - 1] != dt) 
        continue;

        for (int r = l + 1; r < n; r++) {
            if (sp[l][r - 1] != dt)
             continue;
            if (sp[r][n - 1] != dt)
             continue;

            ll st = prfsum[l];
            ll ss = prfsum[r] - prfsum[l];
            ll sss = prfsum[n] - prfsum[r];
            ll cc = st - ss + sss;

            if (cc < mn) mn = cc;
            if (cc > mx) mx = cc;
            f = true;
        }
    }

    if (!f) {
        cout << "-1" <<" "<<"-1" << endl;
    } else {
        cout << mn << " " << mx << endl;
    }
}

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}