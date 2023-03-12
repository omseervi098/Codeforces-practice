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
    int st=0,end=s.size()-1;
    while(st<end){
       if(s[st]=='0' and s[end]=='1'){
           st++;
           end--;
       }
       else if(s[st]=='1' and s[end]=='0'){
           st++;
           end--;
       }
       else {
            break;
       }
    }
    cout<<end-st+1<<endl;
   }
}