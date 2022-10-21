#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi; 
typedef pair<int,int> ii;  
typedef priority_queue <int, vector<int>, greater<int> > minhp;
typedef priority_queue<int> maxhp;
#define ll long long
#define l long

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
    vector<int> v(n);
    for(auto &it:v){
        cin>>it;
    }
    unordered_set<int>s;
    vector<int> temp;
    unordered_map<int,int> d;
    int ans=-1;
    for(int i=0;i<n;i++){
        d[v[i]]=i+1;
        if(s.find(v[i])==s.end()){
            s.insert(v[i]);
            temp.push_back(v[i]);
        }
    }
    int len=temp.size();
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(__gcd(temp[i],temp[j])==1){
                ans=max(ans,d[temp[i]]+d[temp[j]]);
            }
        }
    }
    cout<<ans<<endl;
   }
}