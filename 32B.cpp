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
   string s;cin>>s;
   string ans="";
   for(int i=0;i<s.size();i++){
    if(s.substr(i,1)==".")  ans+="0";
    else if(i+1<sz(s) and s.substr(i,2)=="-.") {ans+="1";i++;}
    else if(i+1<sz(s) and s.substr(i,2)=="--") {ans+="2";i++;}
   }
   cout<<ans<<endl;
}