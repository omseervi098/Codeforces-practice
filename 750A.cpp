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
   int n,k;
   cin>>n>>k;
   int ans=5*((n)*(n+1)/2.0);
   int check=240-k;
   int cnt=0;
   while(check>0){
    int i=1;
        for(i=1;i<=n;i++){
            int curr=5*i;
            if(check<5*i) break; 
            check-=5*i;
            cnt++;
        }
        if(i!=n+1){
            break;
        }
   }
   if(cnt>=n) cnt=n;
   cout<<cnt<<endl;
}

