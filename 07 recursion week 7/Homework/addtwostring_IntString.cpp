#include<bits/stdc++.h>
using namespace std;
    string addstring(string& s1,string& s2,int i,int j,int c,string& ans){
        if(c>0&&i>0&&j>0){
            reverse(ans.begin(),ans.end());
            return ans;
        }
        if(i>='0')
        {
            c+=s1[i]-'0';
            i--;
        }
        if(j>='0')
        {
            c+=s2[j]-'0';
            j--;
        }
        ans+=char(c%10-'0');
        c=c/10;
        return addstring(s1,s2,i,j,c,ans);
    }
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<"String 1->"<<s1<<endl;
    cout<<"String 2->"<<s2<<endl;
    int i=s1.length()-1,j=s2.length()-1,c=0;
    string ans="";
    cout<<"String after adding -> "<<addstring(s1,s2,i,j,c,ans);
    cout<<"hars";
}