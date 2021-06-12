#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,c="hello",sol="";
    int n=0;
    cin>>s;
    for(int i=0;i<s.size();++i){
        if (s[i]==c[n]){
                sol+=s[i];
                n++;
                if (sol==c) break;
        }
    }
    sol==c?cout<<"YES":cout<<"NO";
}
