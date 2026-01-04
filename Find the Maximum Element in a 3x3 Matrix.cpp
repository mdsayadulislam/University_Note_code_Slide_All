#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    vector<vector<int>> arr;
    for (int i = 0; i < 3; i++) {
        vector<int> v;
        for (int j = 0; j < 3; j++) {
            cin >> k;
            v.push_back(k);
        }
        arr.push_back(v);
    }
    int m = INT_MIN;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > m) {
                m = arr[i][j];
            }
        }
    }
    cout << m;
    return 0;
}
