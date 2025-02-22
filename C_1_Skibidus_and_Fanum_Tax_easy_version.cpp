#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    // Since m = 1, we only have one value in b
    int b1 = b[0];

    // Try to sort the array a
    bool possible = true;
    for (int i = 1; i < n; ++i) {
        // Check if the current element is less than the previous
        if (a[i] < a[i - 1]) {
            // Try to flip both a[i] and a[i - 1] using b1
            int new_prev = b1 - a[i - 1];
            int new_curr = b1 - a[i];

            // Check if flipping both makes the sequence non-decreasing
            if (new_prev > new_curr) {
                possible = false;
                break;
            }
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}