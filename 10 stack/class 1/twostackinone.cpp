#include<bits/stdc++.h>

using namespace std;
class Stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"Stack OverFlow \n";
            return ;
        }
        top1++;
        arr[top1]=data;
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack UnderFlow \n";
            return;
        }
        top1--;
    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"Stack OverFlow \n";
            return ;
        }
        top2--;
        arr[top2]=data;
    }
     void pop2(){
        if(top2==size){
            cout<<"Stack UnderFlow \n";
            return;
        }
        top2++;
    }
};
void print(){
    
}
int main()
{
    Stack st(10);
    st.push1(2);
    st.push1(3);
    st.push1(5);
    st.push1(5);
    st.push2(10);
    st.push2(20);
    st.push2(30);
    st.push2(40);
    st.push2(60);
    st.push2(50);
     st.push2(50);
    

}
