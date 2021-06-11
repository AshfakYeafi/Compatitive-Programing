#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans;
    std::vector<int> v;
    cin>>s;
    for (int i=0;i<s.size();++i){
        if (s[i]!='+') v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    cout<<v[0];
    for(int i=0;i<s.size()/2;++i){
        cout<<'+'<<v[i+1];
    }
}
