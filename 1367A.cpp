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
    string s;
    cin>>s;
    //abac
    //abbaac
    //zzzzzz
    //zzzzzzzzzz
    string temp="";
    for(int i=0;i<s.size();){
       if((i+1)<s.size() and s[i]==s[i+1]){
            temp+=s[i];
            i+=2;
            if(i==s.size()){
                temp+=s[i-1];
            }
        }
        else{
            temp+=s[i];
            i++;
        }
    }
    cout<<temp<<endl;
   }
}