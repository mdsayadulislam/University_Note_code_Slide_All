#include <bits/stdc++.h>
using namespace std;

int insertData(int A[], int top) {
    int k;
    cin >> k;
    top = top + 1;
    A[top] = k;
    return top;
}

void printTop(int A[], int top) {
    if(top >= 0)
        cout << A[top] << endl;
}

int deleteData(int A[], int top) {
    if(top >= 0)
        cout << A[top] << endl;
    top = top - 1;
    return top;
}

int main() {
    int A[10];
    int top = -1;

    top = insertData(A, top);
    printTop(A, top);
    top = insertData(A, top);
    printTop(A, top);
    top = insertData(A, top);
    printTop(A, top);
    top = insertData(A, top);
    printTop(A, top);

    top = deleteData(A, top);
    printTop(A, top);
    top = deleteData(A, top);
    printTop(A, top);

    return 0;
}
