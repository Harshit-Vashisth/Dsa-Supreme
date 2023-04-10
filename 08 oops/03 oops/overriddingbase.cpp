#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void print()
    {
        cout<<" Inside A"<<endl;
    }
};

class B : public A{
    public:
    virtual void print()
        {
            cout<<"Inside B"<<endl;
        }
};

int main(){
    B* o=new B();
    o->print();
    A* o1=new A();
    o1->print();

    A* o2=new B();  //this is called upcating
    o2->print();

    B* o3=new B();  //now putting virtual
    o3->print();

    B* o4=(B*)new A();
    o4->print();
}