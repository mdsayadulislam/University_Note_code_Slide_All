#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    bool f = false;


    for (int i = 0; i <= s1.length() - s2.length(); i++) {
        bool match = true;
        for (int j = 0; j < s2.length(); j++) {
            if (s1[i + j] != s2[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            f = true;
            break;
        }
    }

    if (f) {
        cout << "Match found";
    } else {
        cout << "Match not found";
    }

    return 0;
}
