#include <bits/stdc++.h>
using namespace std;

int main() {
    int sz, w;
    cin >> sz;

    vector<int> v(sz);
    for (int i = 0; i < sz; i++) {
        cin >> v[i];
    }

    cin >> w;

    // Calculate sum of first window
    int sum = 0;
    for (int i = 0; i < w; i++) {
        sum += v[i];
    }

    int maxSum = sum;

    // Sliding window technique
    for (int i = w; i < sz; i++) {
        sum = sum + v[i] - v[i - w];
        maxSum = max(maxSum, sum);
    }

    cout << maxSum;
    return 0;
}
