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
bool isPrime(ll n){
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    const ll m=1e9-1;
    cin>>t;
    test(t){
        ll n;
        cin>>n;
        if(n==2){
            cout<<"Ashishgup"<<endl;
            continue;
        }
        if(n==1){
            cout<<"FastestFinger"<<endl;
            continue;
        }
    
        int tw=0,i=0;
        while(n%2==0){
            tw++;
            n/=2;
        }
        if(n==1 || (isPrime(n) and tw==1)){
            cout<<"FastestFinger"<<endl;
        }else{
            cout<<"Ashishgup"<<endl;
        }
    }
}