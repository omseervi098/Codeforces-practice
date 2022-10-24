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
   string s;
   cin>>s;
   string temp="";
   for(auto it:s){
    if(it!='+'){
        temp+=it;
    }
   }
   sort(temp.begin(),temp.end());
   s="";
   for(auto it:temp){
    s+=it;
    s+='+';
   }
   s.pop_back();
   cout<<s<<endl;
}