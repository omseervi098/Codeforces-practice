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
   ll t;
   cin>>t;
   test(t){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(auto &i:a){
            cin>>i;
        }
        int mn=INT_MAX,mx=0;
        for(int i=0;i<n-1;i++){
            int midL=(a[i]+a[i+1])/2.0;
            int midR=(a[i+1]+a[i]+1)/2.0;
            if(a[i]<a[i+1])
            mn=min(mn,midL);
            if(a[i]>a[i+1])
            mx=max(mx,midR);
        }
        if(mx<=mn){
            cout<<mx<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}