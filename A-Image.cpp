#include<bits/stdc++.h>
using namespace std;
void solve(){
   
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    unordered_set<char>m;
    for(auto it:s1)
        m.insert(it);
    for(auto it:s2)
        m.insert(it);
   // cout<<m.size()<<endl;
    if(m.size()==4){
        cout<<"3"<<endl;
    }else if(m.size()==3){
        cout<<"2"<<endl;
    }else if(m.size()==2){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}