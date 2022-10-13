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
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2) cout<<"="<<endl;
    else{
       int  small=-1,large=-1;
       for(int i=0;i<s1.size();i++) {
        if(s1[i]=='S') small=i;
        else if(s1[i]=='L') large=i;
       }
       int small1=-1,large1=-1;
       for(int i=0;i<s2.size();i++)
       {
        if(s2[i]=='S') small1=i;
        else if(s2[i]=='L') large1=i;
       }
       if(s1!="M" and s2=="M"){
         if(small!=-1) cout<<"<"<<endl;
         else if(large!=-1) cout<<">"<<endl;
       }else if(s1=="M" and s2!="M"){
        if(small1!=-1) cout<<">"<<endl;
        else if(large1!=-1) cout<<"<"<<endl;
       }else{
        if(small==-1 and small1==-1){
            if(large>large1) cout<<">"<<endl;
            else cout<<"<"<<endl;
        }else if(large==-1 and large1==-1){
            if(small>small1) cout<<"<"<<endl;
            else cout<<">"<<endl;
        }else {
           
            if(small==-1 and large1==-1){
                cout<<">"<<endl;
            }else if(small!=-1 and large1!=-1){
                cout<<"<"<<endl;
            }
        }
       }

    }
   }
}