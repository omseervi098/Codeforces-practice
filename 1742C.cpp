#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef priority_queue<int, vector<int>, greater<int>> minhp;
typedef priority_queue<int> maxhp;
#define ll long long
#define l long
#define d double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define present(c, x) ((c).find(x) != (c).end())
#define test(t) while (t--)
int main()
{
    int t;
    cin >> t;
    test(t)
    {
        vector<vector<char>> v(8, vector<char>(8, '.'));
        vector<int> tmp(8, -1), tmp1(8, -1);
        int checkr = -1, checkb = -1;
        for (auto &i : v)
        {
            for (auto &j : i)
            {
                cin >> j;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (v[i][j] == 'B')
                {
                    tmp1[j] = j;
                    checkb=j;
                }
                else if (v[i][j] == 'R')
                {
                    tmp[i] = i;
                    checkr=i;
                }
            }
        }
        if (checkb != -1 and checkr == -1)
        {
            cout << "B" << endl;
        }
        else if (checkb == -1 and checkr != -1)
        {
            cout << "R" << endl;
        }
        else
        {
            int i = 0;
            bool bpresent=false;
            int check=-1;
            for (i = 0; i < 8; i++)
            {
                int j = 0;
                bool temp=false;
                for (j = 0; j < 8; j++)
                {
                    if (tmp[i] == i)
                    {
                           
                        if (v[i][j] == 'B')
                        {
                            temp=true;
                            break;
                        }
                    }
                }
                //cout<<temp<<" ";
                if(temp==1){
                    if(check==-1)
                    bpresent=true;
                    bpresent=bpresent &&  temp;
                }
                if(tmp[i]==i and temp==0){
                     cout<<"R"<<endl;
                     check=i;
                     break;
                }
                
            }
            if(check!=-1){}
            else{
           if(bpresent){
            cout<<"B"<<endl;
           }else{
            cout<<"R"<<endl;
           }
            }
        }
    }
}
