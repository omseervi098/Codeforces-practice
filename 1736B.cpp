    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    ll lcm(ll a,ll b){
        ll g=__gcd(a,b);
        return (a*b)/g;
    }
    int main()
    {
        int t;
        cin>>t; 
        while(t--){
            int n;
            cin>>n;
            vector<ll> a(n),b;
            for(auto &i:a) {
               cin>>i;
            }
            int i=0;
            b.push_back(1);
            for(int i=1;i<=n;i++){
                if(i!=n)
                b.push_back(lcm(a[i],a[i-1]));
                else
                b.push_back(lcm(1,a[i-1]));
            }
            i=0;
            for(i=1;i<n;i++){
                //cout<<b[i]<<" "<<b[i+1]<<":";
                if(__gcd(b[i],b[i+1])!=a[i]){
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(i==n){
                cout<<"YES"<<endl;
            }   
        }
    }