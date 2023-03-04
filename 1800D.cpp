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
        int i=1,j=2,x=s[0],y=s[1],cnt=1;

        for(int t=1;t<n-1;t++){
            if((s[t]!=x or s[t+1]!=y) and s[t+1]!=x){
                cnt++;
            }
            x=s[t];
            y=s[t+1];
        }
        //cout<<cnt<<endl;
        // Another Option
        cnt=0;
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+2]){
                cnt++;
            }
        }
        cout<<(n-1)-cnt<<endl;
    }
}