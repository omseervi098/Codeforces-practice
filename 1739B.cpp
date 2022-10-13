#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi; 
typedef pair<int,int> ii;  
typedef priority_queue <int, vector<int>, greater<int> > minhp;
typedef priority_queue<int> maxhp;
#define ll long long
#define l long
#define d double
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define test(t) while(t--) 
int main(){
   int t;
   cin>>t;
   test(t){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    vector<int> ans(n);
    ans[0]=v[0];
    int i=1;
    for(i=1;i<n;i++){
        if(ans[i-1]-v[i]>=0 and ans[i-1]-v[i]!=ans[i-1]+v[i]){
            cout<<-1<<endl;
            break;
        }else if(ans[i-1]+v[i]>=0){
            ans[i]=ans[i-1]+v[i];
        }
    }
    if(i!=n) continue;
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
   }
}