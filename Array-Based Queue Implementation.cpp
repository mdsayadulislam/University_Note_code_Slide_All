#include <bits/stdc++.h>
using namespace std;

#define N 5

class Queue {
public:
    int arr[N];
    int front = -1;
    int rear = -1;

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == N - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Can't insert\n";
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Can't delete\n";
            return;
        }

        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int Front() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}
