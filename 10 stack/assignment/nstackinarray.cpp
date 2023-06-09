#include<bits/stdc++.h>
using namespace std;
class NStack{
    public:
    int *a,*next ,*top;
    int size;
    int freespot;
    int n;
    NStack(int n,int s){
        this->n=n;
        this->size=s;
        freespot=0;
        a=new int [size];
        next=new int [size];
        top=new int[n];
        for(int i=0;i<n;i++)
            top[i]=-1;
        for(int i=0;i<size;i++)
            next[i]=i+1;
            next[size-1]=-1;
    }
    bool push(int X,int m){
        if(freespot==-1)
        return false;
        int index=freespot;
        freespot=next[index];
        a[index]=X;
        next[index]=top[m-1];
        top[m-1]=index;
        return true;
    }
    int pop(int m){
        if(top[m-1]==-1)
            return -1;

        int index=top[m-1];
        top[m-1]=next[index];
        int poped=a[index];
        next[index]=freespot;
        return poped;
    }
    ~NStack(){
        delete []a;
        delete []top;
        delete []next;
    }
};
int main(){
    NStack s(3,6);
    s.push(10,1);
    s.push(20,1);
    s.push(30,1);
     s.push(40,1); 
     s.push(40,1); 
    cout<<s.push(50,1)<<endl;
    cout<<s.push(50,1)<<endl;
    cout<<s.pop(1)<<endl;
    cout<<s.pop(1)<<endl;
}