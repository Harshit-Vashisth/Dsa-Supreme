#include<bits/stdc++.h>

using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int data){
        if(size-top==1)
          {
            cout<<"Overflow"<<endl;
            return;
          }
          else{
            top++;
            arr[top]=data;
          }
    }
    void pop(){
        if(top==-1)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        else
            top--;
    }
    int top(){
        if(top==-1)
            {
                cout<<"No element in stack"<<endl;
                return 0;
            }
            else
             return arr[top];
    }
    bool Size(){
        return top+1;
    }
    bool isempty(){
        if(top==-1)
            return true;
        else
            return false;
    }
};