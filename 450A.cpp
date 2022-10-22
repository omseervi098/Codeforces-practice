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
    ll n,m;
    cin>>n>>m;
    vi v(n);
    for(auto &it:v) cin>>it;
    deque<pair<int,int>> dq;
    for(int i=0;i<n;i++) dq.push_back({i+1,v[i]});
    while(dq.size()>1){
        //cout<<dq.front().first<<" "<<dq.front().second<<endl;
        if(m>=dq.front().second){
            dq.pop_front();
        }else{
            int temp=dq.front().second;
            int temp1=dq.front().first;
        
            dq.pop_front();
            dq.push_back({temp1,temp-m});
        }
    }
    cout<<dq.front().first<<endl;
}