#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef priority_queue<int, vector<int>, greater<int>> minhp;
typedef priority_queue<int> maxhp;
#define ll long long
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
        ll a, b, n;
        cin >> a >> b >> n;
        ll cnt = 0;
        int x = min(a, b);
        int y = max(a, b);
        int l = 0, m = 1, d;

        while (x <= n)
        {
            d = l + m;
            x += d * y;
            l = m;
            m = d;
            cnt++;
        }
        // 0 1 1 3 5 8 13

        cout << cnt << endl;
    }
}