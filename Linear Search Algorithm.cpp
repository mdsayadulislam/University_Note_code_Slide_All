#include <bits/stdc++.h>
using namespace std;

int main() {
    int ar[6];
    int a;

    for (int i = 0; i < 6; i++) {
        cin >> ar[i];
    }

    cin >> a;

    for (int i = 0; i < 6; i++) {
        if (ar[i] == a) {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
