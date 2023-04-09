#include<bits/stdc++.h>
using namespace std;

//here we are going to perform encapsulation 
class animal{
    private:
    int age,wt;
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
    void setter(int age,int wt)
    {
        this->age=age;
        this->wt=wt;
    }
    int getter(){
        return this->age;
    }
};
int main(){
    animal* a=new animal();
    a->eat();
    a->setter(5,10);
    cout<<a->getter();
}