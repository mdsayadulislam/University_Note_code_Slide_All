#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3];
    int k;
    for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
            cin>> k;
            arr[i][j]=k;
           }
    }
    int m = INT_MIN;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j]>m){
                    m=arr[i][j];
            }
        }
    }
    cout <<m;
    return 0;
}


