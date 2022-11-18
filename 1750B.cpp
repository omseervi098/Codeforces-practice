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
        string s;
        cin >> s;
        ll cnt0 = 0, cnt1 = 0;
        for (auto it : s)
        {
            if (it == '0')
            {
                cnt0++;
            }
            else
                cnt1++;
        }
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            ll j = i;
            char temp = s[i];
            // cout << "temp" << temp << endl;
            while (i + 1 < n and s[i + 1] == temp)
            {
                i++;
            }
            mx = max(mx, i - j + 1);
        }
        // cout << mx << endl;
        if (cnt0 * cnt1 < mx * mx)
        {
            cout << mx * mx << endl;
        }
        else
        {
            cout << cnt0 * cnt1 << endl;
        }
    }
}