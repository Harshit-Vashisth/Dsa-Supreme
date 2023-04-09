#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int age,wt;
    void eat(){
        cout<<"eating"<<endl;
    }
};
class B:public A{
    public : 
    int g=10;
    void dance(){
        cout<<"Dancing"<<endl;
    }
};
class C: public A{
    public:
    int d=0;

};
int main(){
    C* o=new C();
    o->eat();
    cout<<o->d;

    B* o1=new B();
    o1->eat();
    cout<<o1->g;
}