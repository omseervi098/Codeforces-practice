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
void solve(){
 int n;
    cin>>n;
    string s;
    cin>>s;
    //Check whether string has substring of size 2 repeated
    unordered_map<string,int> m;
    for(int i=0;i<n-1;i++){
        
        string temp = s.substr(i,2);
        if(m.count(temp)>0){
            if(m[temp]<i-1){
                printf("YES\n");
                return;
            }
        }else{
            m[temp]=i;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
   int t;
   cin>>t;
   test(t){
        solve();
   }
}