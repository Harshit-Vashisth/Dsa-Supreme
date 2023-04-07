#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:
    int age,weight;
    
    public:
    string name;
    Animal(){
        age=0;
        weight=0;
        name="";
    }
    Animal(int a,int w,string n){
        age=a;
        weight=w;
        name=n;
    }
    //copy const
    Animal(Animal* obj){
        this->age=obj->age;
        this->weight=obj->weight;
        this->name=obj->name;
        cout<<"Coping done sir"<<endl;
    }
    
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
        this->weight=weight;  //this is a pointer to curremt object
    }
    }; 
int main(){
    cout<<"Size of empty class is "<< sizeof(Animal) <<endl;  // epmty -> 1 byte  filled=size of input


    //object creation 
//static
Animal b; //default construct its alwasys there
Animal* r=new Animal(2,3,"harshit");  //animal type ka  dynamically
r->type=15;   //-> arrow -> is the easist way to access  them     
 (*r).setter(3);
 cout<<(*r).getter()<<endl;
  cout<<r->name<<endl;
 delete r;


 //copyinh object
 Animal d = r;
 Animal c(r);
return 0;
}    