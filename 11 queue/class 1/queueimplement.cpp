#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int *arr;
    int front,size,rear;
    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=0;
        rear=0;
    }
    void push(int data){
        if((front==0&&rear==size)&&(rear==front-1)){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(front==-1&&rear==-1)
            front=rear=0;
        else if(rear==size-1&&front!=0)
            rear=0;
        else 
            rear++;

        arr[rear]=data;
    }
    void pop(){
        if(front==-1)
        cout<<"Underflow"<<endl;
        else if(front==rear) {
            arr[front]=-1;
            front=-1;
            rear=-1;
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
    int length(){
        if(front==rear)
        return 0;
        return rear-front;
    }
    bool empty(){
        if(front==rear)
        return true;
        else 
        return false;
    }
    int top(){
        if(front==rear)
            return -1;
        return arr[front];
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
    cout<<"popping the element"<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    cout<<q.length()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    
}