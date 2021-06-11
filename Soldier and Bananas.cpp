#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,c=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;++i){
        c+=(i*k);
    }
    (c<=n)?cout<<0:cout<<c-n;
}
