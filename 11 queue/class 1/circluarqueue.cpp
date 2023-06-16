#include <bits/stdc++.h>
using namespace std;
class Circularqueue{
    public :
    int *arr,size,front,rear;
    Circularqueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push(int data){
        if((front==0&&rear==size-1)||(rear==front-1)){
            cout<<"Overflow queue"<<endl;
            return ;
        }
        else if(front==-1)
            front=rear=0;
        else if ((rear==size-1)&&(front!=0))
            rear=0;
        else 
            rear++;
        arr[rear]=data;
    }
    void pop(){
        if(front==-1)
        cout<<"Underflow"<<endl;
        else if(front==rear){
            arr[front]=-1;
            front=rear=-1;
            }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else
        {
            arr[front]=-1;
            front++;
        }
    }
};