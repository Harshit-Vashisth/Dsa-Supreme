#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    char data;
    TreeNode* children[26];
    bool isterminal;
    TreeNode(char c){
        data=c;
        for(int i=0;i<26;i++)
            children[i]=NULL;
        isterminal=false;
    }
};
void insert(TreeNode* root,string str){
    if(str.length()==0){
        root->isterminal=true;
        return ;
    }
    TreeNode* child;
    char c=str[0];
    int index=c-'a';
    if(root->children[index]!=NULL)
        child=root->children[index];
    else{
        child=new TreeNode(c);
        root->children[index]=child;
    }
    insert(child,str.substr(1));
}

void deletetries(TreeNode* root,string s){
    if(s.length()==0){
        root->isterminal=false;
        return;
        }
    char ch= s[0];
    int index=ch-'a';
    TreeNode* child;
    if(root->children[index]!=NULL)
        child=root->children[index];
    else{
        cout<<"Element does not exist"<<endl;
        return ;
    }
    deletetries(child,s.substr(1));
}
int main(){
    TreeNode* root=new TreeNode('-');
    string s="coding";
    insert(root,s);
    cout<<"Inserted";
    deletetries(root,s);
}
