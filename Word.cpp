#include<bits/stdc++.h>
using namespace std;
string up(string s){
    for(int i=0;i<s.size();++i){
        s[i]=(char)toupper(s[i]);
    }
    return s;
}
string down(string s){
    for(int i=0;i<s.size();++i){
        s[i]=(char)tolower(s[i]);
    }
    return s;
}

int main(){
   string s;
   int l_c=0;
   cin>>s;
   for (int i=0;i<s.size();++i){
    if (s[i]>='a') l_c++;
   }
   if (s.size()-l_c>l_c){
    cout<<up(s);
   }
   else cout<<down(s);
}
