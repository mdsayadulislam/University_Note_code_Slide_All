#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6];
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    cout << sum;
    return 0;
}
