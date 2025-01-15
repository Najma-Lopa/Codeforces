#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// Function to find the first year the process becomes stable
int findStableYear(int n, vector<int>& r) {
    vector<int> inDegree(n + 1, 0); // Stores in-degrees of nodes
    vector<int> out(n + 1);         // Stores outgoing edges

    for (int i = 1; i <= n; ++i) {
        out[i] = r[i - 1];
        inDegree[r[i - 1]]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (inDegree[i] == 0) q.push(i);
    }

    vector<bool> visited(n + 1, false);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        visited[u] = true;
        int v = out[u];
        inDegree[v]--;
        if (inDegree[v] == 0) q.push(v);
    }

    vector<int> cycleLength;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            int u = i, len = 0;
            do {
                visited[u] = true;
                u = out[u];
                len++;
            } while (u != i);
            cycleLength.push_back(len);
        }
    }

    int lcm = 1;
    for (int length : cycleLength) {
        lcm = lcm / __gcd(lcm, length) * length;
    }

    return lcm;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; ++i) {
            cin >> r[i];
        }
        cout << findStableYear(n, r) << "\n";
    }
    return 0;
}
