#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int l1 = 0, l2 = 0;
    int i = 0;

    while (i < s1.length() && s1[i] == '0') {
        l1++;
        i++;
    }

    i = 0;
    while (i < s2.length() && s2[i] == '0') {
        l2++;
        i++;
    }

    cout << l1 << " " << l2;

    return 0;
}
