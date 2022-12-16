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
int main()
{
   int t;
   cin>>t;
   vi v(1000000,0);

   for(int i=1;i<=999999;i++){
        int j=i,c1=0;
        while(j>0){
            if(j%10!=0) c1++;
            j/=10;
        }   
        if(c1==1) v[i]=v[i-1]+1;
        else v[i]=v[i-1];
    }
   test(t){
    int n;
    cin>>n;

    cout<<v[n]<<endl;
   }
}