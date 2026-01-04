#include <bits/stdc++.h>
using namespace std;

class PQueue {
public:
    struct Node {
        int value;
        int priority;
    };

    Node* arr;
    int N;
    int front = -1;
    int rear = -1;

    void setqueue(int n) {
        N = n;
        arr = new Node[N];
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == N - 1);
    }

    void enqueue(int value, int priority) {
        if (isFull()) {
            cout << "Queue is full. Can't insert" << endl;
            return;
        }

        if (front == -1) front = 0;
        rear++;
        arr[rear].value = value;
        arr[rear].priority = priority;

        for (int i = rear; i > front; i--) {
            if (arr[i].priority > arr[i - 1].priority) {
                swap(arr[i], arr[i - 1]);
            } else {
                break;
            }
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Can't delete" << endl;
            return;
        }

        front++;
        if (front > rear) front = rear = -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i].value << " ";
        }
        cout << endl;
    }

    int Front() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front].value;
    }
};

int main() {
    PQueue q;
    int n;
    cout << "Enter size: ";
    cin >> n;
    q.setqueue(n);

    q.enqueue(5, 4);
    q.enqueue(10, 5);
    q.enqueue(15, 3);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    q.display();

    return 0;
}
