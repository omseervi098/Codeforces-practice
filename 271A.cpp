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
   int y;cin>>y;
   
   while(y<=9999){
    y=y+1;
    int n1=y/100,n2=y%100;
    int t1=n1/10,t2=n1%10,t3=n2/10,t4=n2%10;
    if(t1!=t2 and t2!=t3 and t3!=t4 and t1!=t4 and t1!=t3 and t2!=t4){
        cout<<y<<endl;
        return 0;
    }
   }
}