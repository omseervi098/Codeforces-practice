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
   int t;
   cin>>t;
   test(t){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    sort(all(v));
    int mn=INT_MAX;
    for(auto x:v){
        if(x>0){
            mn=min(mn,x);
        }
    }
    int sm=accumulate(all(v),0);
    if(mn>abs(v[]))
   }
}