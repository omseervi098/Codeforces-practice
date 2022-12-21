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
    ll n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    int mn=*min_element(v.begin(),v.end());
    int mx=*max_element(v.begin(),v.end());
    unordered_map<int,int> mp;
    for(auto i:v){
        if(i==mn) mp[i]++;
        else if(i==mx) mp[i]++;
    }
    ll cn1=0,cn2=0;
    for(auto i:mp){
        if(i.first==mn){
            cn1+=i.second;
        }else if(i.first==mx){
            cn2+=i.second;
        }
    }
    if(mn==mx){
        ll an1=(n-1);

        ll ans=(n*an1);
        cout<<ans<<endl;
        continue;
    }
    ll ans=2*cn1*cn2;
    cout<<ans<<endl;
   }
}