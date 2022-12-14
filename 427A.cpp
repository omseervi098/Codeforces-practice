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
   int n;
   cin>>n;
   vector<ll> v(n);
   for(auto &i:v) cin>>i;
   int ans=0,cnt=0;
   for(int i=0;i<n;i++){
     if(v[i]>0){
        ans+=v[i];
     }
     if(v[i]==-1){
        if(ans>0){
            ans-=1;
        }else
            cnt++;
     }

   }cout<<cnt<<endl;
}