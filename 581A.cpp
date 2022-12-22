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

    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a>0 and b>0){
        a-=1;
        b-=1;
        cnt++;
    }
    cout<<cnt<<" ";
    if(a>0){
        cnt=a/2;
        cout<<cnt<<endl;
    }else{
        cnt=b/2;
        cout<<cnt<<endl;
    }
   
}