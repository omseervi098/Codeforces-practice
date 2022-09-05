#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n<=3){
        if(n==1)
        cout<<2<<endl;
        else
        cout<<1<<endl;
    }
    else{
        cout<<(int)((n+2)/3)<<endl;  
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}