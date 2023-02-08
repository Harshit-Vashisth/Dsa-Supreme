#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        //star1
        for(int j=0;j<i+1;j++){
            if(j==0||i==n-1||j==i||i==0)
            cout<<j+1<<" ";
            else
            cout<<"  ";
        }


        cout<<endl;
    }
}