#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int d;
    Node* next;
    Node* prev;

    Node(int k) {
        d = k;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* start;

    DoublyLinkedList() {
        start = nullptr;
    }

    void insertFirst(int v) {
        Node* newNode = new Node(v);
        if (start != nullptr) {
            newNode->next = start;
            start->prev = newNode;
        }
        start = newNode;
    }

    void traverseForward() {
        Node* p = start;
        while (p != nullptr) {
            cout << p->d << " ";
            p = p->next;
        }
        cout << endl;
    }

    void insertLast(int v) {
        Node* newNode = new Node(v);
        if (start == nullptr) {
            start = newNode;
            return;
        }

        Node* p = start;
        while (p->next != nullptr) {
            p = p->next;
        }
        p->next = newNode;
        newNode->prev = p;
    }

    void insertBefore(int v, int k) {
        Node* p = start;
        while (p != nullptr && p->d != k) {
            p = p->next;
        }

        if (p == nullptr) return;

        Node* newNode = new Node(v);
        newNode->next = p;
        newNode->prev = p->prev;

        if (p->prev != nullptr) {
            p->prev->next = newNode;
        } else {
            start = newNode;
        }

        p->prev = newNode;
    }

    void insertAfter(int v, int k) {
        Node* p = start;
        while (p != nullptr && p->d != k) {
            p = p->next;
        }

        if (p == nullptr) return;

        Node* newNode = new Node(v);
        newNode->prev = p;
        newNode->next = p->next;

        if (p->next != nullptr) {
            p->next->prev = newNode;
        }

        p->next = newNode;
    }

    void deleteFirst() {
        if (start == nullptr) return;
        Node* temp = start;
        start = start->next;
        if (start != nullptr) {
            start->prev = nullptr;
        }
        delete temp;
    }

    void deleteLast() {
        if (start == nullptr) return;
        Node* p = start;
        while (p->next != nullptr) {
            p = p->next;
        }
        if (p->prev != nullptr) {
            p->prev->next = nullptr;
        } else {
            start = nullptr;
        }
        delete p;
    }

    void deleteBefore(int k) {
        Node* p = start;
        while (p != nullptr && p->d != k) {
            p = p->next;
        }

        if (p == nullptr || p->prev == nullptr) return;

        Node* temp = p->prev;
        if (temp->prev != nullptr) {
            temp->prev->next = p;
        } else {
            start = p;
        }

        p->prev = temp->prev;
        delete temp;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertFirst(10);
    dll.traverseForward();

    dll.insertFirst(6);
    dll.traverseForward();

    dll.insertFirst(12);
    dll.traverseForward();

    dll.insertLast(1);
    dll.traverseForward();

    dll.insertBefore(20, 10);
    dll.traverseForward();

    dll.insertAfter(30, 10);
    dll.traverseForward();

    dll.deleteFirst();
    dll.traverseForward();

    dll.deleteLast();
    dll.traverseForward();

    dll.deleteBefore(30);
    dll.traverseForward();

    return 0;
}

