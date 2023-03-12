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
    for(auto &i:v)cin>>i;
    int k=2*n;
    for(auto &i:v){
        if(i==1) i++;
    }
    for(int i=0;i<n-1 and k>0;i++){
        if(v[i+1]%v[i]==0 and k>0){
            v[i+1]+=1;
            k--;
        }
    }
    
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
   }
}