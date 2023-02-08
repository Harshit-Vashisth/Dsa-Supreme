#include <iostream>
using namespace std;
int main(){
//    12345
//    1234
//    123
//    12
//    1
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++)
    cout<<j+1<<" ";
    cout<<endl;
}
   
}