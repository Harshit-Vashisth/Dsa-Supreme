#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void print()
    {
        cout<<" Inside A"<<endl;
    }
};

class B : public A{
    public:
    void print()
        {
            cout<<"Inside B"<<endl;
        }
};

int main(){
    B* o=new B();
    o->print();

   
}