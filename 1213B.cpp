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
        vector<ll> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        int mn = v[n - 1];
        int cnt = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] > mn)
            {
                cnt++;
            }
            else
            {
                mn = v[i];
            }
        }
        cout << cnt << endl;
    }
}
