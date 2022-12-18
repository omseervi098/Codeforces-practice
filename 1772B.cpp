#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi; 
typedef pair<int,int> ii;  
typedef priority_queue <int, vector<int>, greater<int> > minhp;
typedef priority_queue<int> maxhp;
#define ll long long
#define l long

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
    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;
    if(a<b and c<d and a<c and b<d||a<b and c<d and a>c and b>d ||a>b and c>d and a<c and b<d ||a>b and c>d and a>c and b>d){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }
}