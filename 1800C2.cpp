#include<bits/stdc++.h>
using namespace std;
typedef vector<long long> vi;
typedef vector<vi> vvi; 
typedef pair<long long,long long> ii;  
typedef priority_queue <long long, vector<long long>, greater<long long> > minhp;
typedef priority_queue<long long> maxhp;
#define ll long long
#define l long
#define d double
#define sz(a) long long((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define test(t) while(t--) 
int main(){
   long long t;
   cin>>t;
   test(t){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(auto &i:v) cin>>i;

    long long cost=0;
    priority_queue<long long> s;
    for(long long i=0;i<n;i++){
        if(v[i]==0){
            long long cnt=0;
            while(i<n && v[i]==0 ) {
                cnt++;i++;
            }
            i--;
            // }cout<<cnt<<" ";
            while(!s.empty() and cnt>0){
                cost+=s.top();
                s.pop();
                cnt--;
            }
           
        }else{
            s.push(v[i]);
        }
    }
    cout<<cost<<endl;
   }
}