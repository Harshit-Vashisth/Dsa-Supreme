#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        data=0;
        next=NULL;
        prev=NULL;
    }
    Node(int data){
        this->data=data;
    }
}