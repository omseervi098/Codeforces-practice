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
void solve()
{
    ll n;
    cin >> n;
    vector<int> v;
    int cnt = 1;
    int mx = 0;
    while (n > 0)
    {
        int temp = cnt;
        int save = n % 10;
        while (temp-- > 1)
            save = save * 10 + 0;
        cnt++;
        if (save != 0)
            v.push_back(save);
        n /= 10;
    }
    cout << v.size() << endl;
    for (auto it : v)
        cout << it << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    test(t)
    {
        solve();
    }
}