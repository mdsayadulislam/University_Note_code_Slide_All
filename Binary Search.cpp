#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, sz;
    cin >> sz;
    vector<int> ar(sz);  // use vector for dynamic size

    for (int i = 0; i < sz; i++) {
        cin >> ar[i];
    }

    cin >> a;

    // Make sure array is sorted for binary search
    sort(ar.begin(), ar.end());

    int ll = 0, ul = sz - 1;
    bool found = false;

    while (ll <= ul) {
        int m = ll + (ul - ll) / 2;  // safer way to prevent overflow

        if (ar[m] == a) {
            found = true;
            break;
        } else if (a > ar[m]) {
            ll = m + 1;
        } else {
            ul = m - 1;
        }
    }

    if (found)
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
