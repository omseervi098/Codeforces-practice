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
        ll curr_sum = 0;
        ll mx = 0, cnt = 0;
        map<ll, ll> mp;
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                if (flag)
                    cnt += mx;
                else
                    cnt += mp[0];
                flag = 1;
                mx = 0;
                mp.clear();
            }
            curr_sum += v[i];
            mx = max(mx, ++mp[curr_sum]);
        }
        if (flag)
            cnt += mx;
        else
            cnt += mp[0];
        cout << cnt << endl;
    }
}
