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
        int k,n;
        cin>>k>>n;
        unordered_set<int>s;
        vector<int>v;
        int x=1;
        int j=1;
        for(int i=0;i<k;i++){ 
            if(i==0){
                v.pb(1);
              
                continue;
            }
     
            bool check=false;
            if(j<=n){ 
                j+=x;
                if(j>n){
                    j-=x;
                    break;
                }
                v.pb(j);
                check=true;
                s.insert(j);        
                x++;
            }
            if(check==false){
                break;
            }
        }
        if(v.size()!=k){
            for(int i=n;i>=2;i--){
                if(v.size()==k)
                    break;
                if(s.find(i)==s.end()){
                    v.pb(i);
                }
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<endl;
       }
    }