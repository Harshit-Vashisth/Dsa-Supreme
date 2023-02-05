#include <iostream>
using namespace std;
int main(){
   //pyramid

   for(int i=0;i<6;i++){
    //space
       for(int j=0;j<i;j++)
      cout<<" ";

      //stars
      for(int j=0;j<6-i;j++)
      cout<<"* ";
      
      cout<<endl;
   }
   
}