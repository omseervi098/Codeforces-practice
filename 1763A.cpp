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
    for(auto &i:v){
        cin>>i;
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int a=v[i],b=v[j];
            bitset<32> x(a),y(b);
            //cout<<x<<" "<<y<<endl;
            for(int k=31;k>=0;k--){
                bitset<32> m=x,n=y;
                if(m[k]==1 || n[k]==1){
                    if(m[k]==1 and n[k]==1){
                        continue;
                    }else if(m[k]==1){
                        m[k]=0;
                        n[k]=1;
                    }else{
                        m[k]=1;
                        n[k]=0;
                    }
                }
                int p=m.to_ulong();
                
                int q=n.to_ulong();
                //cout<<p<<" "<<q<<endl;
                ans=max(ans,max(p,q)-min(p,q));
            }
        }
    }
    cout<<ans<<endl;
   }
}