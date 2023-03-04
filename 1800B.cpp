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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> v(26,0),v1(26,0);
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            v[s[i]-'A']++;
        }else
        {
            v1[s[i]-'a']++;
        }
    }
    int count=0;
    for(int i=0;i<26;i++){
       // cout<<v[i]<<" "<<v1[i]<<endl;
        int mn=min(v[i],v1[i]);
        count+=mn;
        v[i]-=mn;
        v1[i]-=mn;
    }
    for(int i=0;i<26;i++){
        if(k>0){
            int mx=max(v[i],v1[i]);
            while(mx>1 && k>0){
                count+=1;
                k--;
                mx-=2;
            }    
        }
    }
    cout<<count<<endl;
   }
}