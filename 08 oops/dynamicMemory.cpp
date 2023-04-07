#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:
    int age,weight;
    string name;
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"Sleep"<<endl;
    }
    int getter()
    {
        return weight;
    }
    void setter(int weight)
    {
        this->weight=weight;
    }
    }; 
int main(){
    cout<<"Size of empty class is "<< sizeof(Animal) <<endl;  // epmty -> 1 byte  filled=size of input


    //object creation 
//static
Animal r;  //animal type ka object
 r.setter(3);
 cout<<r.getter()<<endl;
return 0;
}    