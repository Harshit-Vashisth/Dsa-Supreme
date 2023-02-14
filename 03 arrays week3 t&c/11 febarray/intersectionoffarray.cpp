#inc
int main(){

int n=0;
cout<<"Enter the number of elements"<<endl;
cin>>n;
    //method 1
   vector<int> v(n);
   for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<unique(v);
cout<<endl;

}