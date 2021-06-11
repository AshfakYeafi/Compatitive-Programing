#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=1;
    cin>>s;
    if (s.size()<7)
    {
        cout<<"NO";
    }
    else{
        for(int i=0;i<s.size();++i){
            if (s[i]==s[i+1])
             {  c++;
                if (c==7) break;
            }
            else if (s[i]!=s[i+1]){
                c=1;
            }
        }
        if (c>=7) {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    
}
