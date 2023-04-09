#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:
    int age,weight;
    string name;
    public:
    int type;
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
Animal* r=new Animal();  //animal type ka  dynamically
r->type=15;   //-> arrow -> is the easist way to access  them     
 (*r).setter(3);
 cout<<(*r).getter()<<endl;
 delete r;
return 0;
}    