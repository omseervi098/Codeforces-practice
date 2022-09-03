#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    unordered_set<string> s1;
    unordered_set<string> s2;
    unordered_set<string> s3;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        s1.insert(s);
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        s2.insert(s);
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        s3.insert(s);
    }
    int p1=0,p2=0,p3=0;
    for(auto it:s1){
        if(s2.find(it)!=s2.end() and s3.find(it)!=s3.end()){
            p1+=0;
        }else if(s2.find(it)!=s2.end() || s3.find(it)!=s3.end()){
            p1+=1;
        }else
        p1+=3;
    }
    for(auto it:s2){
        if(s1.find(it)!=s1.end() and s3.find(it)!=s3.end()){
            p2+=0;
        }else if(s1.find(it)!=s1.end() || s3.find(it)!=s3.end()){
            p2+=1;
        }else
        p2+=3;
    }
    for(auto it:s3){
        if(s2.find(it)!=s2.end() and s1.find(it)!=s1.end()){
            p3+=0;
        }else if(s2.find(it)!=s2.end() || s1.find(it)!=s1.end()){
            p3+=1;
        }else
        p3+=3;
    }
    cout<<p1<<" "<<p2<<" "<<p3<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}