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

    int i=0;
    
    while(i<n and s[i]=='m'|| s[i]=='M'){
        i++;
    }
    if(i==0 || i==n){
        cout<<"NO"<<endl;
        continue;
    }
    int j=i;
    while(i<n and s[i]=='E'|| s[i]=='e'){
        i++;
    }
    if(i==j || i==n){
        cout<<"NO"<<endl;
        continue;
    }
    
    j=i;
    while(i<n and s[i]=='O'|| s[i]=='o'){
        i++;
    }
    if(i==j || i==n){
        cout<<"NO"<<endl;
        continue;
    }
    j=i;
    while(i<n and s[i]=='W'|| s[i]=='w'){
        i++;
    }
    if(i==n){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
   }
}