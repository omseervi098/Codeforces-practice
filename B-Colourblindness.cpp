#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
           if((s1[i]!='G' || s2[i]!='B') and (s1[i]!='B' || s2[i]!='G')){
               cout<<"NO"<<endl;
               return;
           }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}