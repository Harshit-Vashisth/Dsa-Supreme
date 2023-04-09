#include<bits/stdc++.h>
using namespace std;

//here we are going to perform encapsulation 
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

};
int main(){
    B* o=new B();
    o->eat();
    cout<<o->g;
}