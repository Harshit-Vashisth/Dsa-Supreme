#include<bits/stdc++.h>
using namespace std;
void solve(string digit,int ind,string out,vector<string>& ans,vector<string>& mp){
    if(ind>=digit.length()){
        ans.push_back(out);
        return;
    }
    int d=digit[ind]-'0';
    string val=mp[d];
    for(int i=0;i<val.length();i++){
        char ch=val[i];
        out.push_back(ch);
        solve(digit,ind+1,out,ans,mp);
        out.pop_back();
    }
}
int main(){
    string number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    vector<string> ans;
    vector<string> mp(10);
    mp[2]="abc";
    mp[3]="def";
    mp[4]="ghi";
    mp[5]="jkl";
    mp[6]="mno";
    mp[7]="pqrs";
    mp[8]="tuv";
    mp[9]="wxyz";
    solve(number,0,"",ans,mp);
    for(auto st:ans)
        cout<<st<<" ";
    }