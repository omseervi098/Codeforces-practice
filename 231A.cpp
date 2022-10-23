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
   vvi v(n,vi(3,0));
   int cnt=0;
   for(auto &it:v){
    cin>>it[0]>>it[1]>>it[2];
    int sm=it[0]+it[1]+it[2];
    if(sm>=2){
        cnt++;
    }
   }
   cout<<cnt<<endl;

}