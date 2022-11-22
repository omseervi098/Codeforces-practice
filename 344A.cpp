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
    ll t;
    cin >> t;
    vector<string> v(t);
    ll cnt = 0;
    for (auto &i : v)
    {
        cin >> i;
    }
    for (int i = 1; i < t; i++)
    {
        // cout << v[i].first << v[i].second << endl;
        string temp = v[i];

        // cout << temp[0] << temp[1] << endl;
        if (temp[0] == v[i - 1][1])
        {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;
}