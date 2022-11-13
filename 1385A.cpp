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
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[1] != v[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[0] << " " << v[2] << endl;
        }
    }
}