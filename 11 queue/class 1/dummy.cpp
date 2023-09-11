#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front,rear,size;
    int* arr;
    Queue(int size){
        arr=new int(size);
        this->size=size;
        front=0;
        rear=0;
    }
    void push(int data){
        if(rear==size)
            cout<<"q is full";
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<" q is empty";
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
        int getfront(){
            if(front==rear){
                cout<<"Q is empty";
                return -1;
            }
            return arr[front];
        }
    bool isEmpty(){
        if(front==rear)
            return true;
        else
            return false;
    } 
    int getSize(){
        return rear-front;
    }
};