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
class C: public B{
    public:
    int d=0;

};
int main(){
    C* o=new C();
    o->eat();
    o->dance();
    cout<<o->g;
    cout<<o->d;
}