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
int gcdarr(vector<int> v){
    int n = v.size();
    int result = v[0];
    for(int i=1;i<n;i++){
        result = __gcd(result,v[i]);
    }
    return result;
}
int main(){
   int t;
   cin>>t;
   test(t){
      int n;
      cin>>n;
      vector<int> v(n);
      for(auto &i:v) cin>>i;
      //sort(v.begin(),v.end());
      int cost = 0;
      if(gcdarr(v)==1){
          cost = 0;
      }else{
         if(__gcd(gcdarr(v),n)==1) cost=1;
         else if(__gcd(gcdarr(v),n-1)==1) cost = 2;
         else cost = 3;
      }
      cout<<cost<<endl;
   }
}