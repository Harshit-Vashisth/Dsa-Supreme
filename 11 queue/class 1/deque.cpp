#include<bits/stdc++.h>
using namespace std;
class Deque{
    public:
    int *arr,size,front,rear;
    Deque(int size){
         arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void pushrear(int data){
        if((front==0)&&(rear==size-1)){
            cout<<"Overflow"<<endl;
            return;
        }
        else if(front==-1)
            front=rear=0;
        else if(rear==size-1 && front!=0)
            rear=0;
        else    
            rear++;
        arr[rear]=data;
                    
    }
    void pushfront(int data){
        if(front == 0 && rear == size-1){
            cout<<"Overflow"<<endl;
            return;
        }
        else if(front==-1)
            front=rear=0;
        else if((front==0)&&(rear!=size-1))
            front=size-1;
        else
            front--;
        arr[front]=data;
    }
    void popfront(){
        if(front==-1)
            cout<<"Underflow"<<endl;
        else if(front==rear)
            {
                arr[front]==-1;
                front=rear=-1;
            }
        else if(size-1==front){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=1;
            front++;
        }
    }
    void poprear(){
        if(front==-1&&rear==-1){
            cout<<"Underflow"<<endl;
            return;
        }
        if(front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        if(rear==0){
            arr[rear]=-1;
            rear=size-1;
        }
        else {
            arr[rear]=-1;
            rear--;
        }
    }
    void print() {
                for(int i=0; i<size; i++) {
                        cout << arr[i] << " ";
                }
                cout << endl;
        }
};
int main(){
    Deque dq(10);
  dq.print();

  dq.pushrear(10);
  dq.pushrear(20);
  dq.pushrear(30);
  dq.pushrear(40);
  dq.pushrear(50);
  dq.pushrear(60);
  dq.pushrear(70);
  dq.pushrear(80);

  dq.print();

  dq.poprear();
  dq.print();

  dq.poprear();
  dq.print();

  dq.popfront();
  dq.print();

    dq.popfront();
  dq.print();

    dq.popfront();
  dq.print();

  dq.pushfront(101);
  dq.print();

  dq.pushfront(102);
  dq.print();

  dq.pushfront(103);
  dq.print();

    dq.pushfront(104);
  dq.print();

  dq.popfront();
  dq.print();

  dq.popfront();
  dq.print();

  dq.pushrear(201);
  dq.print();

    dq.pushrear(202);
  dq.print();

    dq.pushrear(203);
  dq.print();
    dq.pushrear(204);
  dq.print();

    dq.pushrear(205);
  dq.print();


  return 0;
}