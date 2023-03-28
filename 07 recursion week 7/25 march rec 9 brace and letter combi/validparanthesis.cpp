#include<bits/stdc++.h>
using namespace std;
    void solve(vector<string>& ans,string output,int open ,int close){
        if(open==0 && close==0)
        {
            ans.push_back(output);
            return;
        }
        //include open 
        if(open>0){
            output.push_back('(');
            solve(ans,output,open-1,close);
            output.pop_back();
        }
        if(close>open){
            output.push_back(')');
            solve(ans,output,open,close-1);
            output.pop_back();
        }
    }
int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    vector<string> ans;
    string output;
    int open=n;
    int close=n;
    solve(ans,output,open,close);
    for(auto i:ans)
        cout<<i<<" ";
}