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

   int a[4];
   for(int i=0;i<4;i++){
       cin>>a[i];
   }
   sort(a,a+4);
   vector<int> v;
   
    v.pb(a[3]-a[2]);
    v.pb(a[3]-a[1]);
    v.pb(a[3]-a[0]);
    
    
    
   cout<<v[0]<<" "<<v[1]<<" " <<v[2]<<endl;
}