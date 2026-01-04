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

    for (int i = 1; i < sz; ++i) {
        int t = v[i];
        int k = i - 1;


        while (k >= 0 && v[k] > t) {
            v[k + 1] = v[k];
            k = k - 1;
        }
        v[k + 1] = t;
    }


    for (int i = 0; i < sz; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}
