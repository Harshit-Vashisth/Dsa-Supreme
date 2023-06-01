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
    int Top(){
        if(top==-1)
            {
                cout<<"No element in stack"<<endl;
                return 0;
            }
            else
             return arr[top];
    }
    int getlength(){
        return top+1;
    }
    bool isempty(){
        if(top==-1)
            return true;
        else
            return false;
    }
};
int main(){
    Stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;

    cout<<st.getlength()<<endl;
    cout<<st.isempty();
}