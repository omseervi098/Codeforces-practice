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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            unordered_map<int, int> mp;
            int limit = min(i + 228, n);
            for (int j = i; j < limit; j++)
            {
                if (mp[s[j] - '0'] == 0)
                    temp++;
                mp[s[j] - '0']++;
                int mx = 0;
                for (auto it : mp)
                {
                    mx = max(mx, it.second);
                }
                if (mx <= temp)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}