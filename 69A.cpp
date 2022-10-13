#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<vector<int>> v(n,vector<int>(3,0));
    for(auto &it:v) cin>>it[0]>>it[1]>>it[2];
    for(int i=0;i<3;i++){
        int tmp=0;
        for(int j=0;j<n;j++){
            // cout<<v[i][j]<<" ";
            tmp+=v[j][i];
        }
        cout<<endl;
        if(tmp!=0) {cout<<"NO"<<endl; return 0;}
    }
    cout<<"YES"<<endl;
}