#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,b,c=1;
    cin>>l>>b;
    while(1){
        l=l*3;
        b=b*2;
        if (l>b) break;
        ++c;
    }
    cout<<c;
}
