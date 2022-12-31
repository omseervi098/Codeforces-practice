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
   vi v(n);
   //5 5 4 1 0
    for(int i=0;i<n;i++){
         cin>>v[i];
         v[i]=5-v[i];
    }
    sort(all(v),greater<int>());
    int count=0;
    int i=0;
    while(i<n and v[i]>=k){
        i++;
    }
    cout<<i/3<<endl;
}