#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
    if (a>b) return a;
    else return b;
}

int main(){
    int t,c=0,a,b,m=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        m=max(m,(c-a+b));
        c=c-a+b;
    }
    cout<<m;
}
