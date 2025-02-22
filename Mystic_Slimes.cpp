#include <bits/stdc++.h>
using namespace std;

int getMaxSlimePower(vector<int>& A) {
    sort(A.begin(), A.end(), greater<int>());  // Sort in descending order
    
    while (A.size() > 1) {
        int newPower = max(0, A[0] - A[1]);  // Ai eats Aj
        A.erase(A.begin());  // Remove the first slime (stronger one)
        A[0] = newPower;     // Update the power of the new first slime
    }
    return A[0];  // Last remaining slime's power
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << getMaxSlimePower(A) << "\n";
    }
    return 0;
}
