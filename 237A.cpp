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
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        string s = to_string(a * 60 + b);
        mp[s] += 1;
    }
    int cnt = 0;
    for (auto it : mp)
    {
        cnt = max(cnt, it.second);
    }
    cout << cnt << endl;
}