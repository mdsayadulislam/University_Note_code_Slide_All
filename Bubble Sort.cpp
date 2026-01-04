#include <bits/stdc++.h>
using namespace std;

int main() {
    int sz;
    cin >> sz;
    vector<int> v;


    for (int i = 0; i < sz; ++i) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    for (int i = 0; i < sz; ++i) {
        int minVal = INT_MAX;
        int pos = -1;

        for (int j = i; j < sz; ++j) {
            if (v[j] < minVal) {
                minVal = v[j];
                pos = j;
            }
        }


        if (pos != -1) {
            int temp = v[i];
            v[i] = v[pos];
            v[pos] = temp;
        }
    }

    for (int i = 0; i < sz; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}
