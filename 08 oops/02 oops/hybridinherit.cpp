#include<bits/stdc++.h>
using namespace std;

class parent {
    public:
    void printing(){
        cout<<"\nparent"<<endl;
    }
};
class A: public parent{
    public:
    int age,wt;
    void eat(){
        cout<<"eating"<<endl;
    }
};
class B:public parent{
    public : 
    int g=10;
    void dance(){
        cout<<"Dancing"<<endl;
    }
};
class C: public B,public A{
    public:
    int d=0;

};
class D: public C{
    public:
    int d2=0;

};
int main(){
    D* o=new D();
    o->eat();
    o->dance();
    cout<<o->g;
    cout<<o->d;
    o->A::printing();
}