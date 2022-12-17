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
   string a,b,c;
   cin>>a>>b>>c;
   unordered_map<char,int> m;
   for(auto i:a) m[i]++;
   for(auto i:b) m[i]++;
   for(auto i:c) m[i]--;
   for(auto i:m){
       if(i.second!=0){
           cout<<"NO";
           return 0;
       }
   }
   cout<<"YES"<<endl;
}