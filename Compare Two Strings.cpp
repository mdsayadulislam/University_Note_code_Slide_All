#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int l1 = 0, l2 = 0;
    int i = 0;
    while (i < s1.size() && s1[i] == '0') {
        l1++;
        i++;
    }
    i = 0;
    while (i < s2.size() && s2[i] == '0') {
        l2++;
        i++;
    }


    s1 = s1.substr(l1);
    s2 = s2.substr(l2);

    if (s1 == s2) {
        cout << "Same";
    } else {
        cout << "Not Same";
    }

    return 0;
}
