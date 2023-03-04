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
   int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    //maximse x+y+z=n
    for(int x=0;x<=n;x++){
        for(int y=0;y<=n;y++){
            int z=n-a*x-b*y;
            if(z%c==0 && z>=0){
                ans=max(ans,(int)round((x+y+z)/(double)c));
            }
        }
    }
    cout<<ans;
}