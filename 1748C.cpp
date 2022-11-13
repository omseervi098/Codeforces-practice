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
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<pair<ll, bool>> prefix(n + 1);
        prefix[0] = {0, false};
        ll mx = 0, mxidx = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];

            prefix[i + 1].first = prefix[i].first + v[i];
            prefix[i + 1].second = prefix[i].second;
            if (v[i] == 0)
            {
                prefix[i + 1].second = true;
            }
            if (prefix[i + 1].first == 0)
            {
                mx++;
            }
        }
        if (mx == n)
        {
            cout << mx << endl;
            continue;
        }
        unordered_map<ll, ll> mp, m;

        for (ll i = 1; i <= n; i++)
        {

            if (prefix[i].second == true)
                mp[prefix[i].first] += 1;
            if (prefix[i].first == 0)
                mx++;
        }
        int cnt1 = 0;
        for (auto it : mp)
        {
            if (it.second > cnt1)
            {
                cnt1 = it.second;
                mxidx = it.first;
            }
        }

        cout << mx + cnt1 << endl;
    }
}
