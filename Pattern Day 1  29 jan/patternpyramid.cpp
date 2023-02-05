#include <iostream>
using namespace std;
int main(){
   //pyramid

   for(int i=0;i<6;i++){

      for(int j=0;j<6-i-1;j++)
      cout<<" ";

      //stars
      for(int j=0;j<i+1;j++)
      cout<<"* ";
      cout<<endl;
   }
   
}