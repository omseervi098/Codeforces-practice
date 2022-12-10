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
   int n,m;
   cin>>n>>m;
   vector<ll> a(n),b(m);
   for(auto &i:a) cin>>i;
   for(auto &i:b) cin>>i;
   sort(a.begin(),a.end());

   for(int i=0;i<m;i++){
    int val=upper_bound(a.begin(),a.end(),b[i])-a.begin();
    cout<<val<<" ";
   }
   cout<<endl;
}