#include <bits/stdc++.h>
using namespace std;

int main() {
    char ar[6];
    char res[6];

    cin >> ar;

    for (int i = 0; i < 5; i++) {
        res[i] = ar[4 - i];
    }

    res[5] = '\0';
    cout << res;

    return 0;
}
