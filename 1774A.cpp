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
    unordered_map<char,int> m;
    bool check=true;
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(m.count(s[i])>0){
                ans+='-';
                //cout<<ans<<endl;
                m.erase(s[i]);
            }else{
                ans+='+';
                m[s[i]]++;
            }
        }else if(s[i]=='0'){
            ans+='+';
        }
    }
    cout<<ans.substr(1)<<endl;
   }
   
}