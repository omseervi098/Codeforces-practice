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
   int n,k;
   cin>>n>>k;
   vector<ll> v(n);
   deque<ll> dq;
   unordered_set<ll> s;
   for(auto &it:v){
    cin>>it;
    if(s.count(it)==0 and dq.size()<k){
        //s.erase(dq.back());
        dq.push_front(it); 
        s.insert(it); 
    }else if(s.count(it)==0  and dq.size()==k){
        s.erase(dq.back());
        dq.pop_back();
        dq.push_front(it); 
        s.insert(it);
    }
   }
   cout<<dq.size()<<endl;
   while(dq.size()){
    cout<<dq.front()<<" ";
    dq.pop_front();
   }
}