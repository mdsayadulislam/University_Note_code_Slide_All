
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int d;
    Node* next;

    Node(int k){
        d=k;
        next = nullptr;
    }
};

class linkedlist{
public:
    Node* start;

    linkedlist(){
        start = nullptr;
    }

    void insertFirst(int v){
        Node* newNode = new Node(v);
        newNode->next = start;
        start = newNode;
    }

    void traverse(){
        Node* p = start;
        while(p!=nullptr){
            cout<<p->d<<" ";
            p = p->next;
        }
        cout<<endl;
    }

    void insertLast(int v){
        Node* newNode = new Node(v);
        Node* p = start;
        while(p->next!=nullptr){
            p = p->next;
        }
        p->next = newNode;
    }

    void insertBefore(int v, int k){
        Node* newNode = new Node(v);
        Node* p = start;
        while(p->next->d!=k){
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
    }

    void insertAfter(int v, int k){
        Node* newNode = new Node(v);
        Node* p = start;
        while(p->d!=k){
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
    }

    void deleteFirst(){
        start = start->next;
    }

    void deleteLast(){
        Node* p = start;
        while(p->next->next!=nullptr){
            p = p->next;
        }
        p->next = nullptr;
    }

    void deleteBefore(int k){
        Node* p = start;
        while(p->next->next->d!=k){
            p = p->next;
        }
        p->next = p->next->next;
    }

};

int main(){
    linkedlist lst;
    lst.insertFirst(10);
    lst.traverse();
    lst.insertFirst(6);
    lst.traverse();
    lst.insertFirst(12);
    lst.traverse();

    lst.insertLast(1);
    lst.traverse();

    lst.insertBefore(20, 10);
    lst.traverse();

    lst.insertAfter(30, 10);
    lst.traverse();

    lst.deleteFirst();
    lst.traverse();

    lst.deleteLast();
    lst.traverse();

    lst.deleteBefore(30);
    lst.traverse();

    return 0;
}

