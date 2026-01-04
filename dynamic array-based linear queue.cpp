#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
    int* arr;
    int N;
    int front = -1;
    int rear = -1;

    void setqueue(int n) {
        N = n;
        arr = new int[N];
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == N - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Can't insert" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear++;
        arr[rear] = value;
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
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int Front() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    Queue q;
    q.setqueue(n);

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(50);
    q.display();

    return 0;
}
