#include <bits/stdc++.h>
using namespace std;

int minArrayLength(vector<int>& A) {
    unordered_map<int, int> freq;
    for (int num : A) {
        freq[num]++;
    }
    
    int remaining = 0;
    int zero_count = 0;

    for (auto&  count : freq) {
        if (count.first == 0) {
            zero_count = count.second;  // Count how many zeroes exist
        } else {
            remaining += count.second % 2;  // Only odd frequencies contribute to final array size
        }
    }
    
    // If there are zeroes and other elements remaining
    if (zero_count > 0 && remaining > 0) {
        return remaining;
    } else if (zero_count > 0) {
        return 1;  // If only zeroes remain, final length should be 1
    }
    return remaining;
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
        cout << minArrayLength(A) << "\n";
    }
    return 0;
}
