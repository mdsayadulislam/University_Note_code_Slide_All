//#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

class Tree{

  public:

  struct Node{

    int data;
    Node* left;
    Node* right;

  };



  Node* root;
  Tree(){
    root=nullptr;
  }

  Node* createNode(int value){
  Node* newNode=new Node();
  newNode->data=value;
  newNode->left=nullptr;
  newNode->right=nullptr;
  return newNode;


  }


  void createRoot(int value){
    if(root!=nullptr){
        cout<<"Root already exists."<<endl;
        return;
    }
    root=createNode(value);
  }

  void insertLeft(Node* parent, int value){
   if(parent->left != nullptr){
    cout<<"Left children already exists for"<<parent->data<<endl;
    return;
   }


    parent->left=createNode(value);
  }

  void insertRight(Node* parent , int value){
    if(parent->right !=nullptr){

        cout<<"Right child already exists for "<<parent->data<<endl;
        return;
    }
    parent->right=createNode(value);
  }

  void displayPre(Node* node){
   if(node==nullptr){
    return;
   }

   cout<<node->data<<" ";
   displayPre(node->left);
   displayPre(node->right);


  }


  void displayPost(Node* node){
   if(node==nullptr){
    return;
   }


   displayPost(node->left);
   displayPost(node->right);
   cout<<node->data<<" ";


  }

   void displayIn(Node* node){
   if(node==nullptr){
    return;
   }


   displayIn(node->left);
   cout<<node->data<<" ";
   displayIn(node->right);



  }



  void displayLevel(Node* node){

   if(node==nullptr){
    return;
   }
   queue<Node*>q;
   q.push(node);
   while(!q.empty()){
   Node* current=q.front();
   cout<<current->data<<" ";
   q.pop();
   if(current->left !=nullptr){
    q.push(current->left);
   }
   if(current->right!=nullptr){
    q.push(current->right);
   }



   }


  }

  int height(Node* node){
  if(node==nullptr){
    return 0;
  }
  queue<Node*>q;
  q.push(node);
  int h=0;

  while(!q.empty()){
    int NoofNodeInLevel=q.size();
    h++;
    for(int i=0;i<NoofNodeInLevel;i++){
        Node* current=q.front();
        q.pop();
        if(current->left!=nullptr){
            q.push(current->left);
        }
        if(current->right!=nullptr){
            q.push(current->right);
        }
    }






  }


  return h-1;

  }




   int width(Node* node){
  if(node==nullptr){
    return 0;
  }
  queue<Node*>q;
  q.push(node);
  int maxw=0;

  while(!q.empty()){
    int NoofNodeInLevel=q.size();
    maxw=max(maxw,NoofNodeInLevel);
    for(int i=0;i<NoofNodeInLevel;i++){
        Node* current=q.front();
        q.pop();
        if(current->left!=nullptr){
            q.push(current->left);
        }
        if(current->right!=nullptr){
            q.push(current->right);
        }
    }






  }


  return maxw;

  }




};



int main(){

     Tree t;
     t.createRoot(1);
     t.insertLeft(t.root,2);

     t.insertRight(t.root,3);
     t.insertLeft(t.root->left,4);
     t.insertRight(t.root->left,5);
     t.insertLeft(t.root->right,6);
     t.insertRight(t.root->right,7);




     cout<<"Pre Order:\t";
     t.displayPre(t.root);
     cout<<endl;
     cout<<"Post Order:\t";
     t.displayPost(t.root);
     cout<<endl;
     cout<<"In order:\t";
     t.displayIn(t.root);
     cout<<endl;
     cout<<"Level Order:\t";
     t.displayLevel(t.root);
     cout<<endl;
     cout<<"Height is:"<<t.height(t.root)<<endl;
     cout<<"Width is:"<<t.width(t.root)<<endl;



     cout<<endl;

    return 0;
}
