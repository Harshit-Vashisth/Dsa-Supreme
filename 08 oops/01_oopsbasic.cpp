#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    string name;
    void eat(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"Sleep"<<endl;
    }
}; 
int main(){
    cout<<"Size of empty class is "<< sizeof(Animal) <<endl;  // epmty -> 1 byte  filled=size of input

    //object creation 
//static
Animal r;  //animal type ka object
r.age=12;
    cout<<"Age of ramesh is"<<r.age<<endl;
    r.name="Lion";
    cout<<"Name of ramesh is"<<r.name<<endl;
    return 0;
}