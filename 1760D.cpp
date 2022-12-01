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
        for (auto &i : v)
            cin >> i;
        if (n <= 2)
        {
            cout << "YES" << endl;
            continue;
        }
        int i = 0;
        for (i = 0; i < n; i++)
        {
            // cout << v[i] << " " << v[i + 1] << " " << v[i + 2] << endl;
            while (i < n - 1 and v[i] >= v[i + 1])
                i++;
            if (i == n - 1)
            {
                cout << "YES" << endl;
                break;
            }
            while (i < n - 1 and v[i] <= v[i + 1])
                i++;
            if (i == n - 1)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
}