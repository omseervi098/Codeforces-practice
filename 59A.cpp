#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi; 
typedef pair<int,int> ii;  
typedef priority_queue <int, vector<int>, greater<int> > minhp;
typedef priority_queue<int> maxhp;
typedef unordered_map<int,int> umapi;
typedef unordered_map<char,int> umapc;
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
   string s;
   cin>>s;
   int cnt1=0,cnt2=0;
   for(auto it:s){
    if(it>='a' and it<='z') cnt1++;
    else if(it>='A' and it<='Z') cnt2++;
   }
   if(cnt1>=cnt2) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
   }else{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
   }
}