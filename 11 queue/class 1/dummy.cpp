#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front,rear,size;
    int* arr;
    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push(int data){
        if(front==0 && rear==size-1||rear==front-1){
            cout<<"Overflow"<<endl;
            return ;
        }
        else if(front==-1&&rear==-1)
        {
            front=rear=0;
        }
        else if((rear==size-1)&&(front!=0))
            rear=0;
        else
            rear++;
     
            arr[rear]=data;
          
    }
    void pop(){
        if(front==-1){
            cout<<"Underflow"<<endl;
            return;
        }
        else if(front==rear){
            arr[front]=-1;
            front=rear=-1;
        }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
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
int main(){
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.getfront();
    q.pop();
     cout<<q.getfront();
    q.pop();
     cout<<q.getfront();
    q.pop();
     cout<<q.getfront();
    q.pop();
    
}