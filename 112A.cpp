#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int i=0,j=0;
    while(i<a.size() and j<b.size()){
        if(a[i]!=b[i] and abs((b[i]-a[i]))!=32){
            char x=a[i],y=b[i];
            if(x>='A' and x<='Z') x=x+32;
            if(y>='A' and y<='Z') y+=32;
            if(x<y){
                cout<<-1<<endl;
                return 0;
            }else {
                cout<<1<<endl;
                return 0;
            }
        }
        i++;j++;
    }
    cout<<0<<endl;
}