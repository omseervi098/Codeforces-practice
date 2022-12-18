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
        vector<ll> v(n);
        for(auto &i:v){
            cin>>i;
        }
    
        //check if v is already sorted
        int i=0;
        for(i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]){
                break;
            }   
        }
        if(i==v.size()-1){
            cout<<"0"<<endl;
            continue;
        }else{
            vector<ll> avg;
            int i=0;
            for( i=0;i<v.size()-1;i++){
                ll x=(v[i]+v[i+1])/2.0+(v[i]+v[i+1])%2;
                ll a=abs(v[0]-x),j=1;
                for(j=1;j<v.size();j++){
                    ll b=abs(v[j]-x);
                    if(b<a)
                        break;
                    else
                        a=b;
                }
                if(j==v.size()){
                    cout<<x<<endl;
                    break;
                }     
            }
            if(i==v.size()-1)
                cout<<-1<<endl;
        }
    }
}