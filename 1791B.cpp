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
    string s;
    cin>>s;
    int x=0,y=0;
    bool flag=false;
    for(auto i:s){
        if(i=='L'){
            x--;
        }
        else if(i=='R'){
            x++;
        }
        else if(i=='U'){
            y++;
        }
        else{
            y--;
        }
        if(x==1 and y==1){
            cout<<"YES"<<endl;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
    }
    
   }
}