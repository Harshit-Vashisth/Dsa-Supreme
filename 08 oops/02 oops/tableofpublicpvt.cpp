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

};

class C : protected A{

};

class D : private A{

};
int main(){
    B* o=new B();
    cout<<o->b;
    // cout<<o->c;
    // cout<<o->a;   A AND C ARE PROTECTED AND PVT the protected scope in only there where it is extended

}