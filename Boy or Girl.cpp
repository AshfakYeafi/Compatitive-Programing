#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<char> s_;
    cin>>s;
    for(int i=0;i<s.size();++i) s_.insert(s[i]);
    s_.size()%2==0?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
}
