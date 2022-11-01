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
    // 2 3 6 7
    // 3 5 6 0
    // 2 6 11 13
    // 3 5 6 0
    ll t;
    cin >> t;
    test(t)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        ll ans = 0;
        for (auto &it : a)
        {
            cin >> it;
            ans += it;
        }
        for (auto &it : b)
        {
            cin >> it;
            ans += it;
        }
        ans -= *max_element(b.begin(), b.end());
        cout << ans << endl;
        ;
    }
}