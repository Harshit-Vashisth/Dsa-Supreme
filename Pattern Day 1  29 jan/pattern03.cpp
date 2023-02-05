#include <iostream>
using namespace std;
int main(){
    // hollow rectangle

    for(int i=0;i<3;i++){
       
            if(i==0||i==2)
            {
                for(int col=0;col<5;col++)
                cout<<"* ";
            }
            else{
                cout<<"* ";
                for(int i=0;i<3;i++)
                cout<<"  ";
                cout<<"* ";
            }
            cout<<endl;
    }
}