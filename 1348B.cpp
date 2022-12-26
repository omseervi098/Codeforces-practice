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
    int n,k;
    cin>>n>>k;
    vi a(n);
    set<int> s; 
    for(auto &i:a) {cin>>i;s.insert(i);}
    if(s.size()>k) {cout<<"-1"<<endl;}
    else{
        map<int,int> m;
        for(auto i:s) m[i]++;
        int i=1;
        while(m.size()<k){
            if(m.find(i)==m.end()) m[i]++;
            i++;
        } 
        int n=10000/k;
        cout<<n*k<<endl;
        for(int i=0;i<n;i++){
            for(auto j:m) cout<<j.first<<" ";
        }
        cout<<endl;

    }
   }
}