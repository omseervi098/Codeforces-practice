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
   int cnt=0;
   vector<int> a,b;
   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    a.pb(x);
    b.pb(y);
   } 
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
              if(i!=j){
                if(a[i]==b[j]){
                     cnt++;
                }
              }
         }
    }
    cout<<cnt<<endl;

}