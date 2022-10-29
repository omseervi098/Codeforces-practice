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
    unordered_map<string, int> mp;
    test(t)
    {
        string s;
        cin >> s;
        mp[s] += 1;
    }
    string ans = "";
    int mx = 0;
    for (auto it : mp)
    {
        if (mx < it.second)
        {
            mx = it.second;
            ans = it.first;
        }
    }
    cout << ans << endl;
}