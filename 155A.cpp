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
   ll n;
   cin>>n;
   vi v(n);
   for(auto &it:v) cin>>it;
   int cnt=0;
   int mn=v[0],mx=v[0];
   for(int i=1;i<n;i++){
    if(v[i]>mx) {cnt++;mx=v[i];}
    else if(v[i]<mn) cnt++;
    mn=min(mn,v[i]);
   }
   cout<<cnt<<endl;
}