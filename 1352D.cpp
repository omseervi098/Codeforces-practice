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
    vector<ll> v(n);
    for(auto &i:v) cin>>i;
    int st=0,end=n-1;
    int left=0,right=0,moves=0,sm1=0,sm2=0;
    while(st<=end){
        //cout<<left<<" ";
        if(st==0){
            left=v[st++];
            sm1+=left;
        }else{
            left=0;
            while(left<=right and st<=end){
                left+=v[st++];
            }
            sm1+=left;
        }
        moves++;
        if(st>end) break;
        right=0;
        while(right<=left and end>=st){
            right+=v[end--];
        }
        
        sm2+=right;
        moves++;
        //cout<<left<<" "<<right<<endl;
       
    }
    cout<<moves<<" "<<sm1<<" "<<sm2<<endl;
   }
}