#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    string name;
    void eat(){


    }
    void sleep(){

    }
}; 
int main(){
    cout<<"Size of empty class is "<< sizeof(Animal) <<endl;  // epmty -> 1 byte  filled=size of input


    //object creation 
//static
Animal r;  //animal type ka object
    cout<<"Age of ramesh is"<<r.age;
    cout<<"Age of ramesh is"<<r.name;
    return 0;
}