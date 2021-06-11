#include<bits/stdc++.h>
using namespace std;

string low(string s){
    string ans;
    for (int i=0;i<s.size();++i){
        ans+=tolower(s[i]);
    }
    return ans;
}

bool lexi(string s1,string s2){
    for (int i=0;i<s1.size();++i){
        if(tolower(s1[i])>tolower(s2[i])) return 1;
    }
}


int main(){
    string s1,s2;
    int count;
    cin>>s1>>s2;
    
    if (low(s1)==low(s2)) cout<<"0";
    else{    lexi(s1,s2)?cout<<"1":cout<<"-1";
}
}