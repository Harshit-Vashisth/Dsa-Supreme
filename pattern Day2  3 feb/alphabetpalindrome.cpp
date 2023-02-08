 #include <iostream> 
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int j=1;
    for(;j<i+1;j++){
        char c='A'+j-1;
        cout<<c<<" ";
    }
    for(;j>=1;j--){
         char c='A'+j-1;
    cout<<c<<" ";
    } 
    cout<<endl;
}

}