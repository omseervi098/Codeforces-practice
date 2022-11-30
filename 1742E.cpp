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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n), k(q);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (auto &j : k)
        {
            cin >> j;
        }
        vector<ll> pre(n + 1), prem;
        pre[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i - 1];
            if (i == 1)
            {
                prem.push_back(a[0]);
            }
            else
            {
                prem.push_back(max(a[i - 1], prem.back()));
            }
        }

        for (auto ki : k)
        {

            int idx = upper_bound(prem.begin(), prem.end(), ki) - prem.begin();
            cout << pre[idx] << " ";
        }
        cout << endl;
    }
}