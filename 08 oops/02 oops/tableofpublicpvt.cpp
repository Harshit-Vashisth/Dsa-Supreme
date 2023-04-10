#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int b=20;
    protected:
    int c=30;
    private:
    int a=10;
};

class B:public A{
    public:
    void print()
    {
        cout<<b<<" "<<c<<" a is pvt"<<endl;
    }
};

class C : protected A{
    public:
    void print()
        {
            cout<<b<<" "<<c<<" a is pvt"<<endl;
        }
};

class D : private A{
    public:
    void print()
        {
            cout<<b<<" "<<c<<" a is pvt"<<endl;
        }
};
int main(){
    B* o=new B();
    cout<<o->b;
    // cout<<o->c;
    // cout<<o->a;   A AND C ARE PROTECTED AND PVT the protected scope in only there where it is extended
    o->print();

    C* o1=new C();
    //cout<<o1->b;  b is protected
    // cout<<o->c;
    // cout<<o->a;
     o1->print();

     D* o2=new D();
    //cout<<o2->b;  all are pvt
    // cout<<o->c;
    // cout<<o->a;
     o2->print();
}