#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isterminal;
    TrieNode(char c){
        data=c;
        for(int i=0;i<26;i++)
            children[i]=NULL;
        isterminal=false;
    }
};
void insert(TrieNode* root,string str){
    if(str.length()==0){
        root->isterminal=true;
        return ;
    }
    TrieNode* child;
    char c=str[0];
    int index=c-'a';
    if(root->children[index]!=NULL)
        child=root->children[index];
    else{
        child=new TrieNode(c);
        root->children[index]=child;
    }
    insert(child,str.substr(1));
}

void storeSuggestions(TrieNode* curr,vector<string> &temp,string prefix){
    if(curr->isterminal)
        temp.push_back(prefix);
    
    for(char ch='a';ch<='z';ch++){
        int i=ch-'a';
        TrieNode* next=curr->children[i];
        if(next!=NULL){
            //if child is present
            prefix.push_back(ch);
            storeSuggestions(next,temp,prefix);
            prefix.pop_back();
        }
    }
}

vector<vector<string>> getSuggestion(TrieNode* root,string input){
    vector<vector<string>> ans;
    TrieNode* prev=root;
    string prefix="";
    for(int i=0;i<input.length();i++){
        char lastch=input[i];

        int index=lastch-'a';
        TrieNode* curr=prev->children[index];
        if(curr==NULL)
            break;
        else{
            vector<string> temp;
            prefix.push_back(lastch);
            storeSuggestions(curr,temp,prefix);
            ans.push_back(temp);
            prev=curr;
        }
    }
    return ans;
}
int main(){
    vector<string> v;
   v.push_back("love");
	v.push_back("lover");
	v.push_back("loving");
	v.push_back("last");
	v.push_back("lost");
	v.push_back("lane");
	v.push_back("lord");

	string input = "lovi";

	TrieNode* root = new TrieNode('-');

    for(int i=0;i<v.size();i++)
        insert(root,v[i]);
    
    vector<vector<string>> ans=getSuggestion(root,input);
    for(int i=0; i<ans.size(); i++) {

		for(int j=0; j<ans[i].size(); j++) {
			cout << ans[i][j]<<", ";
		}
		cout << endl;
	}
return 0;
}
