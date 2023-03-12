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
bool palindrom(string pal){
    int flag=0;
    for(int i=0;i<pal.size()/2;i++){
        if(pal[i]!=pal[pal.size()-1-i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return true;
    }
    return false;
} 
int main(){
   int t;
   cin>>t;
   test(t){
    int n;
    cin>>n;
    int t=2*n-2;
    vector<string> v(t);
    for(auto &i:v)cin>>i;
   
    string s1="",s2="";
    for(auto i:v){
        if(i.size()==n-1){
            if(s1==""){
                s1=i;
            }
            else{
                s2=i;
            }
        }
        if(s1!="" and s2!=""){
            break;
        }
    }
    string fi="";
    if(s1.substr(1)==s2.substr(0,s2.size()-1)){
        fi=s1+s2[s2.size()-1];
    }
    else{
        fi=s2+s1[s1.size()-1];
    }
    // cout<<fi<<endl;
    if(palindrom(fi)){
                cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // Check if palindrome
    

   }
}