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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        s -= b * k;
        if (s < 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll a = b * k;
            vector<ll> ans;
            ans.push_back(a + min(s, k - 1));
            s -= min(s, k - 1);
            for (int i = 1; i < n; i++)
            {
                ans.push_back(min(s, k - 1));
                s -= min(s, k - 1);
            }
            if (s > 0)
                cout << -1 << endl;
            else
            {
                for (auto it : ans)
                    cout << it << " ";
                cout << endl;
            }
        }
    }
}