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
   string a,b;
    cin>>a>>b;
    int n=a.length();
    bitset<101> x(a);
    bitset<101> y(b);
    // cout<<x<<" "<<y<<endl;
    bitset<101> z=x^y;
    string s=z.to_string();
    int cnt=101-n;
    cout<<s.substr(cnt)<<endl;
}