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
    int mx=0;
    set<char> st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    vector<int> v(26,0),p(26,0);
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        p[s[i]-'a']++;
        --v[s[i]-'a'];
        int x=0;
        for(int j=0;j<26;j++){
            x+=min(1,p[j])+min(1,v[j]);
        }
        mx=max(mx,x);
    }
    cout<<mx<<endl;
   }
}