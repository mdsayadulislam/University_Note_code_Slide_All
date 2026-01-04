
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> arr;
    int k;
    for(int i=0;i<6;i++){

        cin>> k;
        arr.push_back(k);
    }
    int s=0;
    for(int i=0;i<6;i++){

        if(arr[i]%2!=0){

            s=s+arr[i];
        }
    }
    cout << s;
    return 0;
}
