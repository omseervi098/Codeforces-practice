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
    if(n==3) {cout<<-1<<endl; continue;}
    if(n&1){
        for(int i=0;i<(int)n/2;i++){
            v[i]=n-i;
        }
        for(int i=(int)(n/2);i<n;i++){
            v[i]=i-(((int)n/2)-1);
        }
        for(auto it:v) cout<<it<<" ";
        cout<<endl;
    }else{
        for(int i=n;i>=1;i--) cout<<i<<" ";
        cout<<endl;
    }
   }
}